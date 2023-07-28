#include <stdlib.h>

void	n(void) {
	system("/bin/cat /home/user/level7/.pass");
	return ;
}

void	m(void) {
	puts("Nope");
	return ;
}

int main(int ac, char **av) {
	char *buf;
	char *buf2;

	buf = malloc(sizeof(char) * 64);
	buf2 = malloc(sizeof(char) * 4);
	buf2 = m;
	strcpy(buf, av[1]);
	buf2();
	return (0);
}
