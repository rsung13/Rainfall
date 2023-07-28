#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void p(void) {
	char buf[64];
	unsigned int	ret;

	fflush(stdout);
	gets(buf);
	ret = __builtin_return_address(0);
	if ((ret & 0xb0000000) == 0xb0000000) {
		printf("(%p)\n", ret);
		exit(1);
	}
	else {
		puts(buf);
		strdup(buf);
	}
}

int main(void) {
	p();
	return (0);
}
