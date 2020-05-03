#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define KEYSIZE 16

void main(){
	int i;
	char key[KEYSIZE];

//	printf("%lld\n", (long long) time(NULL));
//	srand(time(NULL));
	printf("Seed : %lld\n", (long long) 1588342129);
	srand(1588342129);
	
	for (i = 0; i < KEYSIZE; i++) {
		key[i] = rand()%256;
		printf("%.2x", (unsigned char)key[i]);	
	}
	printf("\n");
}


