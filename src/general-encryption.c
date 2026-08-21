#include <stdio.h>
#include <stdlib.h>

void encrypt(void) {
	return;
}

void decrypt(void) {
	return;
}

int main(int argc, char** argv) {

	// Error Code 1
	if (argc == 1) {
		fprintf(stderr, "Error 1 :: Usage: %s <FILE> <ENCRYPT/DECRYPT> <KEY>\n", argv[0]);
		return 1;
	}

	// Error Code 2
	if (argc >= 5) {
		fprintf(stderr, "Error 2 :: Too many inputs detected");
		return 2;
	}

	int key = 0;

	return 0;
}
