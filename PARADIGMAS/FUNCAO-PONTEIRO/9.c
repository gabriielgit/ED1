#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int numero;
	char data[11];
	double valor;
	char servico[100];
	char cliente[50];
} OrdemServico;

void lerOS(OrdemServico *os) {
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

double mediaValores(OrdemServico *ordens, int n) {
	double soma = 0;

	for (int i = 0; i < n; i++) {
		soma += (ordens + i)->valor;
	}

	return soma / n;
}

OrdemServico *maisCara(OrdemServico *ordens, int n) {
	OrdemServico *maior = ordens;

	for (int i = 1; i < n; i++) {
		if ((ordens + i)->valor > maior->valor) {
			maior = ordens + i;
		}
	}

	return maior;
}

int main() {
	system("cls");

	int n;
	printf("Quantidade de ordens de servico: ");
	scanf("%d", &n);

	OrdemServico *ordens = malloc(n * sizeof(OrdemServico));

	for (int i = 0; i < n; i++) {
		printf("\nOrdem de servico %d\n", i + 1);
		lerOS(ordens + i);
	}

	OrdemServico *mais_cara = maisCara(ordens, n);

	printf("\nMedia dos valores: %.2lf\n", mediaValores(ordens, n));
	printf("Cliente do servico mais caro: %s\n", mais_cara->cliente);
	printf("Servico: %s\n", mais_cara->servico);
	printf("Data: %s\n", mais_cara->data);

	free(ordens);
	return 0;
}
