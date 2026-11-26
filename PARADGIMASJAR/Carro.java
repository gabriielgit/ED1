package ED1.PARADGIMASJAR;

public class Carro {

	public String Placa;
	public int AnoFabricacao;
	public int AnoAtual;
	public int Imposto;

	int CalcImposto(int AnoFabricacao, int AnoAtual) {
		int DifAno;

		DifAno = AnoAtual - AnoFabricacao;

		if (DifAno == AnoFabricacao) {
			this.Imposto = 500;
			return this.Imposto;
		} else if (DifAno <= 10) {
			this.Imposto = 0;
			return this.Imposto;
		} else {
			for (int i = 0; i < DifAno; i++) {
				this.Imposto += 100;
			}
			return this.Imposto;
		}

	}

}