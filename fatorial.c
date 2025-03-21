#include <stdio.h>

int fatorial(int n) {
	if (n == 1) {
		return 1;
	} else {
		return (n * (fatorial(n - 1)));
	}
}

int main() {

	int fat = fatorial(6);

	printf("%d", fat);
	printf("OI");
	return 0;
}