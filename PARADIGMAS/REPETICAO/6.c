// GABRIEL FIALHO, D27724
#include <stdio.h>
#include <stdlib.h>

unsigned long long fatorial(unsigned long long n) {

	if (n > 1) {
		//	printf("%d\n", n);
		return (n * fatorial(n - 1));
	}
	return n;
}

int main() {
	system("cls");
	unsigned long long n = 0;
	scanf("%d", &n);

	printf("%d", fatorial(n));

	return 0;
}
