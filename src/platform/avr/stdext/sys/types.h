#ifndef SYS_TYPES_H
#define SYS_TYPES_H

#define _CONST

typedef int dev_t;
typedef int ino_t;
typedef int mode_t;
typedef int dev_t;
typedef int pid_t;
typedef int nlink_t;
typedef int uid_t;
typedef int gid_t;
typedef int off_t;
typedef int time_t;
typedef int blkcnt_t;
typedef int blksize_t;
typedef int clock_t;
typedef int suseconds_t;

#define S_IFMT     0170000

#define S_IFSOCK   0140000
#define S_IFLNK    0120000
#define S_IFREG    0100000
#define S_IFBLK    0060000
#define S_IFDIR    0040000
#define S_IFCHR    0020000
#define S_IFIFO    0010000

#endif
