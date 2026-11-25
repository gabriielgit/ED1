#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char origem, char destino, char auxiliar) {
	if (n == 1) {
		printf("Mover disco 1 da haste %c para a haste %c\n", origem, destino);
		return;
	}

	hanoi(n - 1, origem, auxiliar, destino);
	printf("Mover disco %d da haste %c para a haste %c\n", n, origem, destino);
	hanoi(n - 1, auxiliar, destino, origem);
}

int main() {
	system("cls");

	hanoi(3, 'a', 'c', 'b');

	return 0;
}
