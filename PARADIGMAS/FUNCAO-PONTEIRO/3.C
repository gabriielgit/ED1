#include <String.h>
#include <stdio.h>
#include <stdlib.h>

int Torre_Hanoi(int* haste_a, int* haste_b, int* haste_c, int x) {

	if (x < 5) {

		return Torre_Hanoi(
			(*(haste_a + x) = *haste_c, haste_a),
			(*(haste_b + x) = *haste_a, haste_b),
			(*(haste_c + x) = *haste_b, haste_c),
			x + 1);
	} else {
		return haste_c;
	}
}

int main() {
	int x = 0;
	int haste_a[3] = { 1, 2, 3 }, haste_b[3], haste_c[3];
	Torre_Hanoi(haste_a, haste_b, haste_c, x);
	return 0;
}
