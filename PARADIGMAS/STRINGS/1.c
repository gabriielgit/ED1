#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	system("cls");
	char str[15], str1[20];
	fgets(str, 15, stdin);
	str[strcspn(str, "\n")] = '\0';
	fflush(stdin);
	fgets(str1, 20, stdin);
	fflush(stdin);
	strcat(str, " ");
	strcat(str, str1);
	fputs(str, stdout);
	return 0;
}