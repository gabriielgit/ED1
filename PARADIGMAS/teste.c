#include <stdio.h>
#include <stdlib.h>

int main() {

	char nome[20];
	int idade;
	printf("Digite o nome: ");
	scanf("%[^\n]", nome);
	printf("Digite a idade: ");
	scanf("%d", &idade);
	printf("Nome: %s, %d anos", nome, idade);
	return 0;
}