package ED1.PARADGIMASJAR;

public class ListaPoo {
	public static void main(String[] args) {
		Carro Carro1 = new Carro();

		Carro1.Placa = "ABC1D23";
		Carro1.AnoFabricacao = 2013;
		Carro1.AnoAtual = 2026;
		System.out.println("O Valor do imposto é de:" + Carro1.CalcImposto(Carro1.AnoFabricacao, Carro1.AnoAtual));
	}

}