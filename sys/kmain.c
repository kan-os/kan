/* SPDX-License-Identifier: BSD-2-Clause */
/* Copyright (c), 2023, KanOS Contributors */
#include <sys/boot.h>
#include <sys/initcall.h>
#include <sys/interrupt.h>
#include <sys/malloc.h>
#include <sys/system.h>

static bool int42_handler(const cpu_ctx_t *restrict ctx, void *restrict arg)
{
    kprintf("interrupt 0x42 called");
    return true;
}

void __used __noreturn kmain(void)
{
    size_t i;
    void *p1;
    void *p2;
    void *p3;

    // Print kernel version, git revision and build datetime
    kprintf("starting version %s (git %s, %s)", sys_version, sys_revision, sys_build);

    // Initialize EVERYTHING
    for(i = 0; initcalls[i].func; initcalls[i++].func());

    // Test interrupt handling
    add_interrupt_handler(alloc_interrupt(0x42), &int42_handler, NULL);
    add_interrupt_handler(alloc_interrupt(0x43), &int42_handler, NULL);
    add_interrupt_handler(alloc_interrupt(0x44), &int42_handler, NULL);
    asm volatile("int $0x42");
    asm volatile("int $0x43");
    asm volatile("int $0x44");

    // Test memory allocation
    p1 = malloc(64);
    p2 = malloc(64);
    kprintf("kmalloc test 1: p1=%p p2=%p", p1, p2);
    free(p1);
    p3 = malloc(64);
    kprintf("kmalloc test 2: p1=%p p3=%p", p1, p3);
    free(p2);
    free(p3);
    p1 = malloc(8192);
    kprintf("kmalloc test 3: p1=%p", p1);
    free(p1);

    panic("nothing else to do!");
    UNREACHABLE();
}
