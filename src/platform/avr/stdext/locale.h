#ifndef __LOCALE_H__
#define __LOCALE_H__

#include <stddef.h>

#define LC_ALL 0
#define LC_COLLATE 0
#define LC_CTYPE 0
#define LC_MONETARY 0
#define LC_NUMERIC 0
#define LC_TIME 0

struct lconv {
   char *decimal_point;
   char *thousands_sep;
   char *int_curr_symbol;
   char *currency_symbol;
   char *mon_decimal_point;
   char *mon_thousands_sep;
   char *negative_sign;
   char frac_digits;
   char p_cs_precedes;
   char p_sep_by_space;
   char n_cs_precedes;
   char n_sep_by_space;
   char n_sign_posn;
   char lc[6];
};

inline struct lconv* localeconv() { return NULL; }
inline char* setlocale (int category, const char* locale) { return NULL; }

#endif
