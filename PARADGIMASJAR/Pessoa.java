package ED1.PARADGIMASJAR;

public class Pessoa extends Carro {
	private String nome = "Maria";
	private int idade;

	public int getIdade() {
		return idade;
	}

	public void setIdade(int idade) {
		this.idade = idade;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public int IdadeEmMeses() {
		return getIdade() * 12;
	}

	public int Idadeem2050() {
		return getIdade() + (2050 - Carro.AnoAtual);
	}

	public Pessoa() {
		this.nome = "josue";
	}
}
