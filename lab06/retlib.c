#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef BUF_SIZE
#define BUF_SIZE 12
#endif

int bof(FILE *badfile) {
	char buf[BUF_SIZE];
	fread(buf, sizeof(char), 300, badfile);
	return 1;	
}

int main(int argc, char **argv) {
	FILE *badfile;
	char dummy[BUF_SIZE*5];

	char *shelladdr = getenv("MYSHELL");

	if (shelladdr) {
		printf("shell addr : 0x%x\n", (unsigned int) shelladdr);
	}

	badfile = fopen("badfile", "r");
	bof(badfile);

	printf("Returned Properly\n");
	fclose(badfile);

	return 1;
}
