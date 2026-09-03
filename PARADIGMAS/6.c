#include <stdio.h>
#include <stdlib.h>

int main() {
	system("cls");
	int x;
	printf("Menu de opcoes:\n1. Escrituario.\n2. Secretario .\n3. Caixa.\n4. Gerente.\n5. Diretor.\n");
	scanf("%d", &x);

	switch (x) {
	case 1:
		float a;
		scanf("%f", &a);
		printf("Novo salario e: %.2f", (a * 0.5) + a);
		break;
	case 2:
		float b;
		scanf("%f", &b);
		printf("Novo salario e: %.2f", (b * 0.35) + b);
		break;
	case3:
		float c;
		scanf("%f", &c);
		printf("Novo salario e: %.2f", (c * 0.2) + c);
		break;
	case 4:
		float d;
		scanf("%f", &d);
		printf("Novo salario e: %.2f", (d * 0.1) + d);
		break;
	case 5:
		float e;
		scanf("%f", &e);
		printf("Sem aumento vagabundo");
		break;

	default:
		break;
	}

	return 0;
}
