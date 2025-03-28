#include <stdio.h>

int main() {
	int x = 0, cont = 0;
	printf("Insira o tamanho do array\n");
	scanf("%d", &x);
	int n[x];
	printf("Insira o numero a ser somado\n");
	for (int i = 0; i < x; i++) {
		printf("Insira o proximo numero a ser somado\n");
		scanf("%d", &n[i]);
		cont += n[i];
	}
	printf("A soma é: %d\n", cont);

	return 0;
}