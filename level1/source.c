#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void	run(void) {
	fwrite("Good... Wait what?\n", 1, 19, STDOUT);
	system("/bin/sh");
}

int main(void) {
	char	buf[64];

	gets(buf);
	return (0);
}
