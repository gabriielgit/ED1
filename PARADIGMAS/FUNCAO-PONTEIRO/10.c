#include <stdio.h>
#include <stdlib.h>

void calcularSalario(double salario, double vendas, double *comissao, double *salario_final) {
	*comissao = vendas * 0.06;
	*salario_final = salario + *comissao;
}

int main() {
	system("cls");

	double salario, vendas, comissao, salario_final;

	printf("Salario fixo: ");
	scanf("%lf", &salario);
	printf("Total de vendas: ");
	scanf("%lf", &vendas);

	calcularSalario(salario, vendas, &comissao, &salario_final);

	printf("Salario fixo: %.2lf\n", salario);
	printf("Total de vendas: %.2lf\n", vendas);
	printf("Comissao: %.2lf\n", comissao);
	printf("Salario final: %.2lf\n", salario_final);

	return 0;
}
