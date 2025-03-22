#include <math.h>
#include <stdio.h>

int main() {
	int x;
	int n, questaoC, questaoC2;

	do {
		float soma = 0;
		printf("Escolha entre A B e C, digite D para sair: \n");
		scanf("%c", &x);

		printf("Digite o tamanho do intervalo: ");
		scanf("%d", &n);

		if (0) {

			for (float i = 1; i <= n; i++) {
				soma += (i + i - 1) / (i * i);
			}
			printf("%g \n", soma);
		}

		else if (x == 'B') {
			for (float i = 1; i <= n; i++) {
			}

		}

		else if (x == 'C') {
			for (float i = 1; i <= n; i++) {
			}
		}

	} while (x != 'D');

	return 0;
}