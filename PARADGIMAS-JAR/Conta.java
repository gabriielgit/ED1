import java.util.Scanner;

class Conta {

	int agencia;
	int numeroConta;
	String cliente;
	double saldo;

	void depositar(double valor) {
		saldo = saldo + valor;
	}

	boolean sacar(double valor) {
		if (valor > saldo) {
			return false;
		}

		saldo = saldo - valor;
		return true;
	}

	boolean transferir(double valor) {
		if (valor > saldo) {
			return false;
		}

		saldo = saldo - valor;
		return true;

	}

	boolean

}

	public static void main() {
		Conta conta = new Conta();

		conta.agencia = 1001;
		conta.numeroConta = 12345;
		conta.cliente = "Carlos";
		conta.saldo = 500.0;

		conta.depositar(200.0);
		conta.sacar(100.0);
		conta.transferir(100.0);

		System.out.println(conta.saldo);

}