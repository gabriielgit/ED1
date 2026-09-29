#include <stdio.h>
#include <string.h>

void inverter(char str[], int inicio, int fim) {

	if (inicio >= fim) {
		return;
	}
	char temp = str[inicio];
	str[inicio] = str[fim];
	str[fim] = temp;

	inverter(str, inicio + 1, fim - 1);
}

int main() {

	char str[100];

	printf("Digite uma palavra: ");
	fgets(str, 100, stdin);

	str[strcspn(str, "\n")] = '\0';

	inverter(str, 0, strlen(str) - 1);

	printf("%s\n", str);

	return 0;
}
