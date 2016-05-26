/**
 * avr-libc extension header
 *
 * This header is injected at the top of each translation unit using
 * `-include stdext.h`. It declares a few functions used by eLua, but which are
 * missing from avr-libc.
 */

#ifndef _STDEXT_H
#define _STDEXT_H

#include <stddef.h>

// string.h

char *strndup(const char *s, size_t n);
int strcoll ( const char * str1, const char * str2 );

// stdio.h

//#define _IONBF  0
#define _IOFBF  0
#define _IOLBF  0

#define L_tmpnam    1

// FIXME: Check if long is correct
typedef long _off_t;

#endif
