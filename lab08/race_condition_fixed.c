#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(){
	char *fn = "/tmp/XYZ";
	char buffer[80];
	FILE *fp;

	scanf("%70s", buffer);
	
	uid_t euid = geteuid();
	setuid(getuid());

	if (!access(fn, W_OK)){
		fp = fopen(fn, "a+");
		fwrite("\n", sizeof(char), 1, fp);
		fwrite(buffer, sizeof(char), strlen(buffer), fp);
		fclose(fp);
	} else {
		printf("No Permission\n");
	}

	setuid(euid);
	
	return 0;
}
