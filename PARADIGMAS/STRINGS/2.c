#include <stdio.h>

int main(void) {
	char entrada[10];
	char saida[13];
	int i;

	for (i = 0; i < 9; i++) {
		printf("Numero %d: ", i + 1);
		scanf(" %c", &entrada[i]);

		if (entrada[i] < '0' || entrada[i] > '9') {

			i--;
		}
	}
	entrada[9] = '\0';

	saida[0] = entrada[0];
	saida[1] = '.';
	saida[2] = entrada[1];
	saida[3] = entrada[2];
	saida[4] = entrada[3];
	saida[5] = '.';
	saida[6] = entrada[4];
	saida[7] = entrada[5];
	saida[8] = entrada[6];
	saida[9] = ',';
	saida[10] = entrada[7];
	saida[11] = entrada[8];
	saida[12] = '\0';

	printf("\nInformado : %s\n", entrada);
	printf("Formatado : %s\n", saida);

	return 0;
}