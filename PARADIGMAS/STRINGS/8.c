#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main() {
	system("cls");
	int cont = 0, j = 0, i = 0;
	char str_old[100], str_new[100];
	fgets(str_old, 100, stdin);
	str_old[strcspn(str_old, "\n")] = '\0';
	fflush(stdin);

	printf("\n\n");

	while (str_old[i] == 32) {
		i++;
	}

	for (i; i < strlen(str_old); i++) {
		if (str_old[i] != 32 || str_old[i] == 32 && str_old[i + 1] != 32) {
			str_new[j] = str_old[i];
			j++;
		}
		if (str_old[i] == 32 && str_old[i + 1] != 32) {
			cont++;
		}
	}
	str_new[j] = '\0';
	j -= 1;
	while (str_new[j] == 32) {
		j--;
	}
	str_new[j + 1] = '\0';
	fputs(str_new, stdout);

	printf("\n%d", cont);
	printf("\n\n");

	return 0;
}
