#include <stdio.h>
#include <stdlib.h>

int main() {
	system("cls");
	int n;
	scanf("%d\n", &n);

	if (n % 2 == 0) {
		printf("par\n");
	} else {
		printf("impar\n");
	}

	return 0;
}