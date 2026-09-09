// GABRIEL FIALHO, D27724
#include <stdio.h>
#include <stdlib.h>

int main() {
	system("cls");
	char nome[100];
	float n1, n2, n3, media;

	printf("Digite o nome do aluno: ");
	scanf(" %99[^\n]", nome);

	printf("Digite as 3 notas do aluno separadas por espaco: ");
	scanf("%f %f %f", &n1, &n2, &n3);

	media = (n1 + n2 + n3) / 3.0;

	printf("\nAluno: %s\n", nome);
	printf("Nota final (Media): %.2f\n", media);

	return 0;
}