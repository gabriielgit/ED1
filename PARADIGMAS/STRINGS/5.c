#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	system("cls");
	int cont = 0;
	char str[15];
	fgets(str, 15, stdin);
	str[strcspn(str, "\n")] = '\0';
	fflush(stdin);
	for (int i = 0; i < strlen(str) != '\0'; i++) {
		if (strchr("aeiouAEIOU", str[i])) {
			cont++;
		}
	}
	fputs(str, stdout);
	printf("\n%d", cont);
	return 0;
}