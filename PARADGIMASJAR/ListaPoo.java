package ED1.PARADGIMASJAR;

public class ListaPoo {
	public static void main(String[] args) {

		Carro Carro1 = new Carro();
		Pessoa Pessoa1 = new Pessoa();

		// Carro1.Placa = "ABC1D23";
		// Carro1.AnoFabricacao = 2026;
		// Carro1.AnoAtual = 2026;
		// System.out.println("O Valor do imposto é de: " +
		// Carro1.CalcImposto(Carro1.AnoFabricacao, Carro1.AnoAtual));
		Pessoa1.setNome("Rafael");
		Pessoa1.setIdade(15);
		System.out.println(Pessoa1.getNome());
		System.out.println(Pessoa1.IdadeEmMeses());
		System.out.println(Pessoa1.Idadeem2050());
	}

}