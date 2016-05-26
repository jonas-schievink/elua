#ifndef __REENT_H__
#define __REENT_H__

#include <stddef.h>

typedef int _ssize_t;
struct _reent {
    int _errno;
};

extern struct _reent _my_reent;

#define _REENT (&_my_reent)

#endif
