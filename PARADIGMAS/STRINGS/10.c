#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	system("cls");
	char str[100], str1[100];
	fgets(str, 100, stdin);
	str[strcspn(str, "\n")] = '\0';
	fflush(stdin);

	strcpy(str1, str);
	for (int i = 0; i < strlen(str); i++) {
		printf("%c%c", str[i], str1[i]);
	}
	printf("\n\n");

	return 0;
}