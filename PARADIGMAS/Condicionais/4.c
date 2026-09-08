#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	system("cls");
	int a;
	printf("Menu de opcoes:\n1. Somar dois numeros.\n2. Raiz quadrada de um numero.\nDigite a opcao desejada:");

	scanf("%d", &a);

	switch (a) {
	case 1:
		int x, y, z;
		scanf("%d\n%d", &x, &y);
		printf("A soma e %d:", x + y);
		break;
	case 2:
		int v;
		scanf("%d", &v);
		printf("A raiz e %.2f:", sqrt((double)v));
		break;
	default:

		break;
	}

	return 0;
}
