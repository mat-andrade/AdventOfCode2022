#include <stdio.h>
#include <stdlib.h>
#include "../utils.h"

int main(int argc, char **argv) {
	if (argc != 2) error_required_args(argc - 1, 1);
	const char *filepath = argv[1];
	FILE *f = fopen_or_exit(filepath, "r");
	long max = -1, atual = 0;
	char buf[10];
	while(fgets(buf, 10, f)) {
		long n;
		int r = sscanf(buf, "%ld", &n);
		if (r <= 0) {
			if (atual > max) max = atual;
			atual = 0;
		} else {
			atual += n;
		}
	}
}
