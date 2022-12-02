#include "utils.h"

#include <stdio.h>
#include <stdlib.h>

void error_required_args(int received, int expected) {
	printf("%d arguments received. %d argument expected.\n", received, expected);
	exit(1);
}

FILE *fopen_or_exit(const char * restrict filepath, const char * restrict mode) {
	FILE *f = fopen(filepath, mode);
	if (!f) {
		printf("File '%s' could not be found.\n", filepath);
		exit(1);
	}
	return f;
}
