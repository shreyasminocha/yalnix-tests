#include <assert.h>
#include <stdio.h>
#include <comp421/yalnix.h>

int main(int argc, char **argv) {
	int i;

	for (i = 0; i < argc; i++) {
		fprintf(stderr, "argv[%d] = %p", i, argv[i]);
		fprintf(stderr, " = '%s'\n", argv[i]);
	}

	assert(Exec(NULL, argv + 1) == -1);
	assert(Exec("init", NULL) == -1);
	return 0;
}
