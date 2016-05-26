/**
 * Implements missing string.h functions
 */

#include "stdext.h"
#include <string.h>
#include <stdlib.h>

char* strndup(const char* s, size_t n) {
    char *result;
    size_t len = strlen(s);

    if (n < len) {
        len = n;
    }

    result = (char *) malloc(len + 1);
    if (!result) {
        return 0;
    }

    result[len] = '\0';
    return (char *) memcpy(result, s, len);
}

int strcoll(const char* str1, const char* str2) {
    return strcmp(str1, str2);
}
