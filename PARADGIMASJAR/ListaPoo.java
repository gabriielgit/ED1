package ED1.PARADGIMASJAR;

public class ListaPoo {
	public static void main(String[] args) {
		System.out.print("\033[2J\033[H");
		System.out.flush();
		Carro Carro1 = new Carro();

		Carro1.Placa = "ABC1D23";
		Carro1.AnoFabricacao = 2026;
		Carro1.AnoAtual = 2026;
		System.out.println("O Valor do imposto é de: " + Carro1.CalcImposto(Carro1.AnoFabricacao, Carro1.AnoAtual));
	}

}