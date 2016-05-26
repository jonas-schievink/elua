#ifndef __SIGNAL_H__
#define __SIGNAL_H__

#include <stddef.h>

#define SIGINT 0

#define SIG_ERR NULL
#define SIG_DFL 0
#define SIG_IGN 0

inline void (*signal(int sig, void (*func)(int)))(int) { return SIG_ERR; }

#endif
