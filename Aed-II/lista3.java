import java.util.Scanner;

public class lista3 {
	public static int fatorial(int numero) {
		int fat = 1;
		int n = 1;
		while (++n <= numero) {
			fat = fat * n;
		}
		return fat;

	}

	public static double divisao(int a, int b) {
		return a / b;

	}

	public static void main(String[] args) {
			double d = divisao(4, 0);
		System.out.println(d);
	
}