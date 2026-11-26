package ED1.PARADGIMASJAR;

public class Carro {

	public String Placa;
	public int AnoFabricacao;
	public int AnoAtual;
	public int Imposto;

	int CalcImposto(int AnoFabricacao, int AnoAtual) {
		int DifAno = 0;

		DifAno = AnoAtual - AnoFabricacao;

		if (DifAno == 0) {
			this.Imposto = 500;
			return this.Imposto;
		} else if (DifAno > 1 && DifAno < 10) {
			for (int i = 0; i < DifAno; i++) {
				this.Imposto += 100;
			}
			return this.Imposto;
		} else {
			this.Imposto = 0;
			return this.Imposto;
		}

	}

}