#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char nome[50];
	int idade;
	char sexo;
	double altura;
	double peso;
} Paciente;

void lerPaciente(Paciente *p) {
	printf("Nome: ");
	scanf(" %49[^\n]", p->nome);
	printf("Idade: ");
	scanf("%d", &p->idade);
	printf("Sexo (M/F): ");
	scanf(" %c", &p->sexo);
	p->sexo = toupper(p->sexo);
	printf("Altura (m): ");
	scanf("%lf", &p->altura);
	printf("Peso (kg): ");
	scanf("%lf", &p->peso);
}

double pesoIdeal(Paciente *p) {
	if (p->sexo == 'M') {
		return (72.7 * p->altura) - 58;
	}
	return (62.1 * p->altura) - 44.7;
}

int main() {
	system("cls");

	int x = 20;
	Paciente pacientes[x];
	Paciente *mais_pesado = pacientes;

	for (int i = 0; i < x; i++) {
		printf("\nPaciente %d\n", i + 1);
		lerPaciente(pacientes + i);

		if ((pacientes + i)->peso > mais_pesado->peso) {
			mais_pesado = pacientes + i;
		}
	}

	printf("\nPessoa mais pesada: %s\n", mais_pesado->nome);

	printf("\nAcima do peso ideal:\n");
	for (int i = 0; i < x; i++) {
		if ((pacientes + i)->peso > pesoIdeal(pacientes + i)) {
			printf("%s, %d anos\n", (pacientes + i)->nome, (pacientes + i)->idade);
		}
	}

	printf("\nAbaixo do peso ideal:\n");
	for (int i = 0; i < x; i++) {
		if ((pacientes + i)->peso < pesoIdeal(pacientes + i)) {
			printf("%s, deve alcancar %.2lf kg\n", (pacientes + i)->nome, pesoIdeal(pacientes + i));
		}
	}

	return 0;
}
