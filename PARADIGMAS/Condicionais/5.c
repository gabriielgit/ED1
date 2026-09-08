#include <stdio.h>
#include <stdlib.h>

float media(float a, float b, float c) {

	int media = (a + b + c) / 3;

	return media;
}

int main() {

	system("cls");
	char nome[10];
	float a, b, c;

	// scanf("%s", nome);
	scanf("%f %f %f", &a, &b, &c);

	// printf("Nome: %s\n", nome);
	printf("Media: %.2f\n", media(a, b, c));

	if (media(a, b, c) <= 4) {
		printf("sifudeu ta abaixo da media otario,REPROVOU!!!");
	} else if (media(a, b, c) <= 7) {
		printf("foi pro exame vai estudar vagabundo");
	} else {
		printf("aprovado, DOIDAO, BOA!!!");
	}
	return 0;
}
