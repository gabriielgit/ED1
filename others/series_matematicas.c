#include <math.h>
#include <stdio.h>

int main() {
	char x;
	int n, questaoC, questaoC2;

	printf("Escolha entre A B e C, digite D para sair: ");

	scanf("%c%*c", &x);
	while (x != 'D') {
		float soma = 0;

		printf("Digite o tamanho do intervalo: ");
		scanf("%d%*c", &n);

		switch (x) {
		case 'A':
			for (float i = 1; i <= n; i++) {
				soma += (i + i - 1) / (i * i);
			}
			printf("%g \n", soma);
			break;
		case 'B':
			for (float i = 1; i <= n; i++) {
				soma += (i * i * i) / pow(10, i - 1);
			}
			printf("%g \n", soma);
			break;
		case 'C':
			for (float i = 1; i <= n; i++) {
				soma += i / (3 * (i * 2));
			}
			printf("%g \n", soma);

			break;
		}
		printf("Escolha entre A B e C, digite D para sair: ");

		scanf("%c%*c", &x);
	}

	return 0;
}