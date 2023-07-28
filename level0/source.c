#define _GNU_SOURCE
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int ac, char **av) {
	int		tmp = 0;
	char	*tab[2];
	(void)ac;

	tmp = atoi(av[1]);
	if (tmp != 423) {
		printf("No !\n");
		exit(0);
	}
	else {
		tab[0] = strdup("/bin/sh");
		tab[1] = NULL;
		gid_t egid = getegid();
		uid_t euid = geteuid();
		setresgid(egid, egid, egid);
		setresuid(euid, euid, euid);
		execv("/bin/sh", tab);
	}
	return (0);
}
