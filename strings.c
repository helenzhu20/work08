# include <stdlib.h>
# include <stdio.h>
# include "strings.h"

int mystrlen(char *s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

char * mystrncpy( char *dest, char *source, int n) {
    int i;
    for (i = 0; i < n; i++) {
        dest[i] = source[i];
    }
    dest[i++] = '\0';
    return dest;
}

char * mystrcat( char *dest, char *source ) {
    int i = 0;
    int l = mystrlen(dest);
    while (source[i]) {
        dest[i + l] = source[i];
        i++;
    }
    return dest;
}

int mystrcmp( char *s1, char *s2 ) {
    if (s1 > s2) {
        return 1;
    } else if (s1 < s2) {
        return -1;
    } else {
        return 0;
    }
}

char * mystrchr( char *s, char c ) {
    while (*(s++)) {
        if (*s == c) {
            return s;
        }
    }
    return NULL;
}