#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	m;

void	p(char *buf) {
	printf(buf);
	return ;
}

void	n(void) {
	char buf[520];

	fgets(buf, 512, stdin);
	p(buf);
	if (m != 16930116)
		return ;
	system("/bin/cat /home/user/level5/.pass");
}

int main(void) {
	n();
	return (0);
}
