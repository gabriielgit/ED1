#include <stdio.h>
#include <stdlib.h>

int main() {
	system("cls");
	double PP, pt;
	int a;
	scanf("%d", &a);
	scanf("%lf", &pt);

	switch (a) {
	case 1:

		printf("mercurio, %.2lf :", PP = ((pt / 10) * 0.37) * 10);
		break;
	case 2:

		printf("venus, %.2lf :", PP = ((pt / 10) * 0.38) * 10);
		break;
	case 3:

		printf("marte, %.2lf :", PP = ((pt / 10) * 0.38) * 10);
		break;
	case 4:

		printf("jupter, %.2lf :", PP = ((pt / 10) * 2.64) * 10);
		break;
	case 5:

		printf("saturno, %.2lf :", PP = ((pt / 10) * 1.15) * 10);
		break;
	case 6:

		printf("urano, %.2lf :", PP = ((pt / 10) * 1.17) * 10);
		break;
	default:
		break;
	}

	return 0;
}