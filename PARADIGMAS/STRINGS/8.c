#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main() {
	system("cls");
	int cont = 0, j = 0;
	char str_old[100], str_new[100];
	fgets(str_old, 100, stdin);
	str_old[strcspn(str_old, "\n")] = '\0';
	fflush(stdin);

	printf("\n\n");

	for (int i = 0; i < strlen(str_old); i++) {
		if (str_old[i] != 32 && str_old[i + 1] != 32 || str_old[i] == 32 && str_old[i + 1] != 32 || str_old[i] != 32 && str_old[i + 1] == 32) {
			str_new[j] = str_old[i];
			j++;
		}
		if (str_old[i] == 32) {
			cont++;
		}
	}
	str_new[j] = '\0';
	fputs(str_new, stdout);

	printf("\n%d", cont);
	printf("\n\n");

	return 0;
}