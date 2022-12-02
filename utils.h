#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>

void error_required_args(int received, int expected);

FILE *fopen_or_exit(const char * restrict filepath, const char * restrict mode);

#endif
