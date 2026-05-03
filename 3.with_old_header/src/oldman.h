#ifndef OLDMAN_H
#define OLDMAN_H 1

#include "stdio.h"

inline void oldman__print_hello() {
    printf("I WROTE C FOR 30 YEARS...\n");
};

#ifdef STRIP_PREFIX
#define print_hello oldman__print_hello
#endif

#endif
