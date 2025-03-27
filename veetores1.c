#include <stdio.h>
#define N_NOTAS 10

void media(int notas[N_NOTAS]) {
	int notasTotal = 0;
	for (int i = 0; i < N_NOTAS; i++) {
		notasTotal += notas[i];
	}
	float media = (float)(notasTotal) / N_NOTAS;
	int cont = 0;
	for (int i = 0; i < N_NOTAS; i++) {
		if (media < notas[i]) {
			cont++;
		}
	}
	printf("A media da turma e: %g\n O numero de alunos que passaram sao: %d", media, cont);
}

void preencher(int notas[N_NOTAS]) {

	for (int i = 0; i < N_NOTAS; i++) {
		scanf("%d", &notas[i]);
	}
	media(notas);
}

int main(int argc, char const* argv[]) {

	int notas[N_NOTAS];
	preencher(notas);

	return 0;
}
