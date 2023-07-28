#include <stdlib.h>

char	c[100];

void	m() {
	time_t	res;

	res = time(NULL);
	printf("%s - %d\n", c, res);
	return ;
}

int main(int ac, char **av) {
	char	*buf;
	char	*buf2;
	FILE	*f;

	buf = malloc(sizeof(char) * 8);
	buf[0] = 1;
	buf[4] = malloc(sizeof(char) * 8);
	buf2 = malloc(sizeof(char) * 8);
	buf2[0] = 2;
	buf2[4] = malloc(sizeof(char) * 8);

	strcpy(buf[4], av[1]);
	strcpy(buf2[4], av[2]);
	f = fopen(c, "/home/user/level8/.pass", "r");
	fgets(c, 68, f);
	puts("~~");
	return (0);
}
