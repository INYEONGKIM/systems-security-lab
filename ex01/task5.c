#include <stdio.h>
#include <stdlib.h>

//#define KEYSIZE 16
#define KEYSIZE 32

void main(){
	unsigned char *key = (unsigned char *) malloc(sizeof(unsigned char)*KEYSIZE);
	FILE* random = fopen("/dev/urandom", "r");

	fread(key, sizeof(unsigned char)*KEYSIZE, 1, random);
	
	for(int i = 0; i < KEYSIZE; i++){
		printf("%.2x ", *(key + i));
	}
	printf("\n");
	fclose(random);
}
