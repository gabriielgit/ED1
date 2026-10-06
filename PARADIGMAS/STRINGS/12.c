#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	system("cls");
	char str[20], chr;
	int cont = 0;
	fgets(str, 15, stdin);
	scanf("%c", &chr);
	str[strcspn(str, "\n")] = '\0';
	fflush(stdin);

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == chr) {

			cont++;
		}
	}
	if (cont) {
		printf("Aparece %d vezes", cont);
	}
	return 0;
}