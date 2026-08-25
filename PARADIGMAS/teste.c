#include <stdio.h>
#include <stdlib.h>

int main() {
	char nome[10];
	int a, b, c;

	scanf("%s", nome);
	scanf("%d \n %d \n  %d", &a, &b, &c);

	int media = (a + b + c) / 3;
	printf("Nome: %s\n", nome);
	printf("Media: %d\n", media);

	return 0;
}
