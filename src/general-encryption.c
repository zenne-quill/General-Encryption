#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	if (argc == 1) {
		fprintf(stderr, "Error 1 :: Usage: %s <FILE> <ENCRYPT/DECRYPT> <KEY>\n", argv[0]);
		return 1;
	}

	int key = 0;

	return 0;
}
