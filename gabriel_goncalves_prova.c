#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Amanda - indentação para todo o código.

char lerString(char* str) { // Amanda - essa função não deveria retornar nada.
	printf("Digite uma String\n");
	scanf("%c", &str); // Amanda - não deve utilizar & no ponteiro. Usar %s para strings.
	return;
}

void inverterString(char* str) {
	for (int i = 0; i < strlen(str); i++) {
		str[i] = str[strlen(str) - i]; // Amanda - vai perder alguns caracteres.
		// Amanda - não deveria usar strlen
	}
}

float lerNumeroPositivo() {
	float Num;
	e

		printf("Digite um numero real positivo");
	scanf("%.2f", &Num); // Amanda - validar em loop.
	return Num;
}
float AplicarDesconto(int* valor) { // Amanda - não precisa ser ponteiro.
	if (*valor < 1500) {
		*valor = (*valor / 100) * 5; // Amanda - deveria subtrair, dessa forma o desconto foi de 95%
	} else (1500 >= *valor && *valor <= 7000) {
			valor = (*valor / 100) * 10; // Amanda - deveria subtrair, dessa forma o desconto foi de 90%
		}
	else(*valor > 7000) {
		valor = (*valor / 100) * 20; // Amanda - deveria subtrair, dessa forma o desconto foi de 80%
	}
	return valor; // Amanda - se usou ponteiro não precisa retornar, mas se fosse deveria usar *valor, para pegar a apontada.
}

void processarVendas(float* vendas, int tamanho, float* soma) {
	for (int i = 0; i < tamanho; i++) {
		scanf("%d", &vendas); // Amanda - usar função da questão 04
		tamanho = &vendas;
		soma += AplicarDesconto(tamanho);
	}
	int menu() {
		int x = 0;
		// Amanda - colocar os comandos dentro de um loop.
		printf("Digite 1 para executar a inversao de string\n");
		printf("Digite 2 para processar o setor de vendas\n");
		printf("Digite 3 para finalizar a execução\n");
		// Amanda - receber digitação de x.

		switch (x) {
		case (1):
			char str[100];
			inverterString(lerString(str));
			break;
		case (2):
			float* soma;
			float* vendas;
			int* tamanho = malloc(sizeof *(lerNumeroPositivo())); // Amanda - utilizou as variáveis incorretas.
			processarVendas(vendas, tamanho, soma);
			break;
		case (3):
			return 0;
			break;
		}
	}

	int main() {
		menu();
		return 0;
	}
