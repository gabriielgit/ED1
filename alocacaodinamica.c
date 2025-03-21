#include <stdio.h>
#include <stdlib.h>

int main() {
	int tamanhoInv;
	printf("Digite a quantidade de produtos: ");
	scanf("%d", &tamanhoInv);

	int* quantidade = (int*)malloc(tamanhoInv * sizeof(int));
	float* precoUnitario = (float*)malloc(tamanhoInv * sizeof(float));
	float* valorTotalP = (float*)malloc(tamanhoInv * sizeof(float));
	for (int i = 0; i < tamanhoInv; i++) {
		printf("Digite a quantidade do produto %d: ", i + 1);
		scanf("%d", (quantidade + i));
		printf("Digite o preco do produto %d: ", i + 1);
		scanf("%f", (precoUnitario + i));
		*(valorTotalP + i) = (*(quantidade + i)) * (*(precoUnitario + i));
	}
	for (int i = 0; i < tamanhoInv; i++) {

		printf("O valor total do produto %d e %.2f\n", i + 1, valorTotalP[i]);
	}

	printf("-------------------\n");

	for (int i = 0; i < tamanhoInv; i++) {
		printf("Informacoes do produto: %d\n", i + 1);
		printf("Quantidade: %d\n", quantidade[i]);
		printf("Preco: %.2f\n", precoUnitario[i]);
		printf("O valor: %.2f\n", valorTotalP[i]);
		printf("-------------------\n");
	}
	float ValorTotal = 0;

	for (int i = 0; i < tamanhoInv; i++) {
		ValorTotal += valorTotalP[i];
	}
	printf("O valor total e: %.2f\n", ValorTotal);
	free(quantidade);
	free(precoUnitario);
	free(valorTotalP);
	return 0;
}