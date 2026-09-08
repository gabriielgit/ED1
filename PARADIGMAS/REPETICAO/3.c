#include <stdio.h>
#include <stdlib.h>

int fibo(int n) {
	int anterior;
	anterior = n;
	printf("%d\n", n + anterior);
	fibo(n);

	return;
}

int main() {
	system("cls");
	int n;
	fibo(scanf("%d", &n));

	return 0;
}
