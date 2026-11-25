#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int aviao;
	char passageiro[50];
} Reserva;

int buscarAviao(int *avioes, int numero) {
	for (int i = 0; i < 4; i++) {
		if (numero > 0 && *(avioes + i) == numero) {
			return i;
		}
	}
	return -1;
}

void cadastrarAvioes(int *avioes) {
	for (int i = 0; i < 4; i++) {
		printf("Numero do aviao %d: ", i + 1);
		scanf("%d", avioes + i);
	}
}

void cadastrarLugares(int *avioes, int *lugares) {
	if (*avioes == 0) {
		printf("Cadastre os avioes primeiro\n");
		return;
	}

	for (int i = 0; i < 4; i++) {
		printf("Lugares disponiveis no aviao %d: ", *(avioes + i));
		scanf("%d", lugares + i);
	}
}

void reservar(int *avioes, int *lugares, Reserva *reservas, int *total) {
	int numero, pos;

	if (*total >= 60) {
		printf("Limite de reservas atingido\n");
		return;
	}

	printf("Numero do aviao: ");
	scanf("%d", &numero);

	pos = buscarAviao(avioes, numero);
	if (pos == -1) {
		printf("Aviao invalido\n");
		return;
	}

	if (*(lugares + pos) <= 0) {
		printf("Voo lotado.\n");
		return;
	}

	printf("Nome do passageiro: ");
	scanf(" %49[^\n]", (reservas + *total)->passageiro);
	(reservas + *total)->aviao = numero;
	(*total)++;
	(*(lugares + pos))--;

	printf("Reserva confirmada.\n");
}

void consultarAviao(Reserva *reservas, int total) {
	int numero, encontrou = 0;

	printf("Numero do aviao: ");
	scanf("%d", &numero);

	for (int i = 0; i < total; i++) {
		if ((reservas + i)->aviao == numero) {
			printf("%s\n", (reservas + i)->passageiro);
			encontrou = 1;
		}
	}

	if (!encontrou) {
		printf("Nenhuma reserva encontrada\n");
	}
}

void consultarPassageiro(Reserva *reservas, int total) {
	char nome[50];
	int encontrou = 0;

	printf("Nome do passageiro: ");
	scanf(" %49[^\n]", nome);

	for (int i = 0; i < total; i++) {
		if (strcmp((reservas + i)->passageiro, nome) == 0) {
			printf("Aviao %d\n", (reservas + i)->aviao);
			encontrou = 1;
		}
	}

	if (!encontrou) {
		printf("Nenhuma reserva encontrada\n");
	}
}

int main() {
	system("cls");

	int avioes[4] = {0}, lugares[4] = {0}, total = 0, opcao;
	Reserva reservas[60];

	do {
		printf("\n1. Cadastrar o numero dos avioes\n");
		printf("2. Cadastrar o numero de lugares disponiveis em cada aviao\n");
		printf("3. Reservar passagem\n");
		printf("4. Consultar por aviao\n");
		printf("5. Consultar por passageiro\n");
		printf("6. Finalizar\n");
		printf("Opcao: ");
		scanf("%d", &opcao);

		switch (opcao) {
		case 1:
			cadastrarAvioes(avioes);
			break;
		case 2:
			cadastrarLugares(avioes, lugares);
			break;
		case 3:
			reservar(avioes, lugares, reservas, &total);
			break;
		case 4:
			consultarAviao(reservas, total);
			break;
		case 5:
			consultarPassageiro(reservas, total);
			break;
		case 6:
			break;
		default:
			printf("Opcao invalida\n");
			break;
		}
	} while (opcao != 6);

	return 0;
}
