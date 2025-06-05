#include <stdio.h>

void menu() {
	char op;

	do {
		printf("\nA - Insersão em lista - Pelo Início"
			   "\nB - Insersão em lista - Pelo Fim"
			   "\nC - Excluir"
			   "\nD - Imprimir"
			   "\nE - Finalizar"
			   "\nDigite sua opção: ");
		scanf(" %c", &op);
		op = toupper(op);

		switch (op) {
		case 'A':
			break;
		case 'B':
			break;
		case 'C':
			break;
		case 'D':
			break;
		case 'E':
			printf("\nPrograma finalizado.");
			break;
		default:
			printf("\nOpção inválida.");
		}

	} while (op != 'E');
}