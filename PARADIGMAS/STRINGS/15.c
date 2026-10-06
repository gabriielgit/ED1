#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	system("cls");
	char str[20];
	int cont = 0, aux;
	fgets(str, 15, stdin);

	str[strcspn(str, "\n")] = '\0';
	fflush(stdin);
	for (int j = 0; j < strlen(str) - 1; j++) {
		for (int i = j + 1; i < strlen(str); i++) {
			if (str[j] == str[i]) {
				cont++;
			}
		}
	}
	printf("%d", cont);
	return 0;
}