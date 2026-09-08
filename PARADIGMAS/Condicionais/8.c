#include <stdio.h>
#include <stdlib.h>

int main() {
	system("cls");
	int x, y, z;
	scanf("%d\n", &x);
	scanf("%d\n", &y);
	scanf("%d", &z);

	if (x + y + z == 180) {

		if (x == y && y == z) {
			printf("triangulo equilatero");
			// break;
		} else if (x == y || x == z || y == z) {
			printf("triangulo isoceles");
		} else {
			printf("triangulo escaleno");
		}
	}

	return 0;
}
