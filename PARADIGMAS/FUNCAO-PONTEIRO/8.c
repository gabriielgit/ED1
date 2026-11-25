#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int numero;
	char data[11];
	double valor;
	char servico[100];
	char cliente[50];
} OrdemServico;

void cadastrarOS(OrdemServico *os) {
	printf("Numero da OS: ");
	scanf("%d", &os->numero);
	printf("Data (dd/mm/aaaa): ");
	scanf("%10s", os->data);
	printf("Valor: ");
	scanf("%lf", &os->valor);
	printf("Servico realizado: ");
	scanf(" %99[^\n]", os->servico);
	printf("Cliente: ");
	scanf(" %49[^\n]", os->cliente);
}

void listarOS(OrdemServico *ordens, int total) {
	if (total == 0) {
		printf("Nenhuma ordem de servico cadastrada\n");
		return;
	}

	for (int i = 0; i < total; i++) {
		printf("\nOS %d\n", (ordens + i)->numero);
		printf("Data: %s\n", (ordens + i)->data);
		printf("Valor: %.2lf\n", (ordens + i)->valor);
		printf("Servico: %s\n", (ordens + i)->servico);
		printf("Cliente: %s\n", (ordens + i)->cliente);
	}
}

int main() {
	system("cls");

	int x = 100, total = 0, opcao;
	OrdemServico ordens[x];

	do {
		printf("\n1. Cadastrar ordem de servico\n");
		printf("2. Listar ordens de servico\n");
		printf("3. Finalizar\n");
		printf("Opcao: ");
		scanf("%d", &opcao);

		switch (opcao) {
		case 1:
			if (total < x) {
				cadastrarOS(ordens + total);
				total++;
			} else {
				printf("Limite de ordens atingido\n");
			}
			break;
		case 2:
			listarOS(ordens, total);
			break;
		case 3:
			break;
		default:
			printf("Opcao invalida\n");
			break;
		}
	} while (opcao != 3);

	return 0;
}
