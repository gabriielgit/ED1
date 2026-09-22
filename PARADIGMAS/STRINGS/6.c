#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	system("cls");
	int cont = 0;
	char str[40];
	fgets(str, 15, stdin);
	str[strcspn(str, "\n")] = '\0';
	fflush(stdin);

	fputs(str, stdout);
	printf("\n%d", cont);
	return 0;
}