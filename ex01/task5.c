#include <stdio.h>
#include <stdlib.h>

#define KEYSIZE 16

void main(){
	unsigned char *key = (unsigned char *) malloc(sizeof(unsigned char)*KEYSIZE);
	FILE* random = fopen("/dev/urandom", "r");

	fread(key, sizeof(unsigned char)*KEYSIZE, 1, random);
	printf("%.2x\n", *key);
	fclose(random);
}
