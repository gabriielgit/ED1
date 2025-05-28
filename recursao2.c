void mostrar_multiplos(int n, int q) {
	if (q == 0) return;
	mostrar_multiplos(n, q - 1);
	printf("%d x %d = %d\n", n, q, n * q);
}
void mostrar_multiplos_cauda(int n, int i, int q) {
	if (i > q) return;
	printf("%d x %d = %d\n", n, i, n * i);
	mostrar_multiplos_cauda(n, i + 1, q);