#include <String.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	system("cls");
	char str[15], str1[20];
	fgets(str, 15, stdin);
	fgets(str1, 20, stdin);
	strcat(str, str1);
	fputs(str, stdout);
	return 0;
}