#include <stdio.h>
#include <stdlib.h>

int valido(int j, int c) {
	if (j < 0 || c < 0 || j > 3 || c > 3) {
		return 0;
	}
	if (j > 0 && j < c) {
		return 0;
	}
	if (3 - j > 0 && 3 - j < 3 - c) {
		return 0;
	}
	return 1;
}

int imprimirCaminho(int *pai, int estado) {
	if (pai[estado] == -1) {
		return 0;
	}

	int anterior = pai[estado];
	int passo = imprimirCaminho(pai, anterior) + 1;
	int dj = abs(estado / 8 - anterior / 8);
	int dc = abs((estado / 2) % 4 - (anterior / 2) % 4);

	if (anterior % 2 == 0) {
		printf("%d. Atravessam %d jesuita(s) e %d canibal(is) da margem esquerda para a direita\n", passo, dj, dc);
	} else {
		printf("%d. Voltam %d jesuita(s) e %d canibal(is) da margem direita para a esquerda\n", passo, dj, dc);
	}

	return passo;
}

int main() {
	system("cls");

	int pai[32], visitado[32] = {0}, fila[32];
	int movimentos[5][2] = {{1, 0}, {2, 0}, {0, 1}, {0, 2}, {1, 1}};
	int ini = 0, fim = 0, inicio = 30, objetivo = 1;

	for (int i = 0; i < 32; i++) {
		pai[i] = -1;
	}

	fila[fim++] = inicio;
	visitado[inicio] = 1;

	while (ini < fim) {
		int atual = fila[ini++];
		int j = atual / 8, c = (atual / 2) % 4, b = atual % 2;
		int sinal = (b == 0) ? -1 : 1;

		for (int m = 0; m < 5; m++) {
			int nj = j + sinal * movimentos[m][0];
			int nc = c + sinal * movimentos[m][1];
			int novo = nj * 8 + nc * 2 + (1 - b);

			if (valido(nj, nc) && !visitado[novo]) {
				visitado[novo] = 1;
				pai[novo] = atual;
				fila[fim++] = novo;
			}
		}
	}

	imprimirCaminho(pai, objetivo);

	return 0;
}
