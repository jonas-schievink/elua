#include <stdio.h>
#include <stdint.h>

#include "sercon.h"

FILE* fopen ( const char * filename, const char * mode ) {
    return NULL;
}

FILE* tmpfile ( void ) {
    return NULL;
}

char* strerror ( int errnum ) {
    return "";
}

long int ftell ( FILE * stream ) {
    return -1;
}

int fseek ( FILE * stream, long int offset, int origin ) {
    return 1;
}

int setvbuf ( FILE * stream, char * buffer, int mode, size_t size ) {
    return 1;
}

char* tmpnam ( char * str ) {
    return NULL;
}

int remove ( const char * filename ) {
    return 1;
}

int rename ( const char * oldname, const char * newname ) {
    return 1;
}

void setbuf ( FILE * stream, char * buffer ) {}

FILE* freopen ( const char * filename, const char * mode, FILE * stream ) {
    return NULL;
}

int fileno(FILE *stream) {
    return -1;
}
