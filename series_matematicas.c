#include <math.h>
#include <stdio.h>

int main(int argc, char const* argv[]) {
	int x;
	double cubo2, cubo;
	double quadrado2, quadrado;
	int quantas, questaoC, questaoC2;

	do {
		printf("Escolha entre A B e C, digite D para sair: \n");
		scanf("%c", &x);

		if (x == 'A') {
			printf("Digite quantas vezes quer executar: \n");
			scanf("%d", &quantas);
			int i = i + 1;
			while (quantas - 1 != 0) {

				quadrado2 = pow(i - 1, 2);
				quadrado = pow(i, 2);
			}
			printf("%lf/%lf\n", quadrado2, quadrado);
		}

		if (x == 'B') {
			printf("Digite quantas vezes quer executar: \n");
			scanf("%d", &quantas - 1 != 0);
			int i = 1;
			while (quantas - 1 != 0) {
				cubo2 = pow(i + 2, 3);
				cubo = pow(i, 3);
				cubo2 / cubo;
			}
			printf("%lf/%lf = %lf\n", cubo2, cubo);
		}
		if (x == 'C') {
			printf("Digite quantas vezes quer executar: \n");
			int i = i + 2;
			while (quantas - 1 != 0) {
				scanf("%d", &quantas - 1 != 0);
				questaoC = (i / 2);
				questaoC2 = 3 * (i);
			}
			printf("%d/%d \n");
		}

	} while (x != 'D');

	return 0;
}
