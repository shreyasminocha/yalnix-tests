#include <assert.h>
#include <stdio.h>
#include <comp421/yalnix.h>

int main(int argc, char **argv) {
	Delay(10);

	char buf[500];
	int recv;
	recv = TtyRead(0, buf, (sizeof buf) - 1);
	buf[recv] = 0;
	printf("%s", buf);
	recv = TtyRead(0, buf, (sizeof buf) - 1);
	buf[recv] = 0;
	printf("%s", buf);

	return 0;
}
