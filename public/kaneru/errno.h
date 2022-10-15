/* SPDX-License-Identifier: BSD-2-Clause */
/* Copyright (c), 2022, Kaneru Contributors */
#ifndef __PUBLIC_KANERU_ERRNO_H__
#define __PUBLIC_KANERU_ERRNO_H__

/* This approximately represents the errno values
 * defined by mlibc and follows kind of the same
 * design except for some numbers. This header
 * is a subject to some drastic changes because
 * 
 * I'd rather have groups of error codes complying
 * to certain standards, say a block of POSIX errnums
 * and then comes a block of Kaneru-esque errnums. */

#define __K_EDOM 1
#define __K_EILSEQ 2
#define __K_ERANGE 3

#define E2BIG 1001
#define EACCES 1002
#define EADDRINUSE 1003
#define EADDRNOTAVAIL 1004
#define EAFNOSUPPORT 1005
#define EAGAIN 1006
#define EALREADY 1007
#define EBADF 1008
#define EBADMSG 1009
#define EBUSY 1010
#define ECANCELED 1011
#define ECHILD 1012
#define ECONNABORTED 1013
#define ECONNREFUSED 1014
#define ECONNRESET 1015
#define EDEADLK 1016
#define EDESTADDRREQ 1017
#define EDOM __K_EDOM
#define EDQUOT 1018
#define EEXIST 1019
#define EFAULT 1020
#define EFBIG 1021
#define EHOSTUNREACH 1022
#define EIDRM 1023
#define EILSEQ __K_EILSEQ
#define EINPROGRESS 1024
#define EINTR 1025
#define EINVAL 1026
#define EIO 1027
#define EISCONN 1028
#define EISDIR 1029
#define ELOOP 1030
#define EMFILE 1031
#define EMLINK 1032
#define EMSGSIZE 1033
#define EMULTIHOP 1034
#define ENAMETOOLONG 1035
#define ENETDOWN 1036
#define ENETRESET 1037
#define ENETUNREACH 1038
#define ENFILE 1039
#define ENOBUFS 1040
#define ENODATA 1041
#define ENODEV 1042
#define ENOENT 1043
#define ENOEXEC 1044
#define ENOLCK 1045
#define ENOLINK 1046
#define ENOMEM 1047
#define ENOMSG 1048
#define ENOPROTOOPT 1049
#define ENOSPC 1050
#define ENOSR 1051
#define ENOSTR 1052
#define ENOSYS 1053
#define ENOTCONN 1054
#define ENOTDIR 1055
#define ENOTEMPTY 1056
#define ENOTRECOVERABLE 1057
#define ENOTSOCK 1058
#define ENOTSUP 1059
#define ENOTTY 1060
#define ENXIO 1061
#define EOPNOTSUPP ENOTSUP
#define EOVERFLOW 1062
#define EOWNERDEAD 1063
#define EPERM 1064
#define EPIPE 1065
#define EPROTO 1066
#define EPROTONOSUPPORT 1067
#define EPROTOTYPE 1068
#define ERANGE __K_ERANGE
#define EROFS 1069
#define ESPIPE 1070
#define ESRCH 1071
#define ESTALE 1072
#define ETIME 1073
#define ETIMEDOUT 1074
#define ETXTBSY 1075
#define EWOULDBLOCK EAGAIN
#define EXDEV 1076

#endif /* __PUBLIC_KANERU_ERRNO_H__ */
