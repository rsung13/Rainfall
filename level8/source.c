#include <stdio.h>

char	*service = NULL;
char	*auth = NULL;

int main() {
	char	buf[128];

	while (1) {
		printf("%p, %p \n", auth, service);
		if (fgets(buf, 128, stdin) == NULL)
			return (0);
		if (strncmp(buf, "auth ", 5) == 0) {
			auth = malloc(4);
			memset(auth, 0, sizeof(auth));
			if (strlen(buf + 5) < 31)
				strcpy(auth, buf + 5);
		}
		else if (strncmp(buf, "reset", 5) == 0) {
			free(auth);
		}
		else if (strncmp(buf, "service", 6) == 0) {
			service = strdup(buf + 7);
		}
		else if (strncmp(buf, "login", 5) == 0) {
			if (auth + 32 != NULL) {
				system("/bin/sh");
				continue ;
			}
			fwrite("Password:\n", 1, 10, stdout);
		}
	}
}
