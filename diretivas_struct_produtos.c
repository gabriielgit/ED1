#include "produtos.h"
void menu(Produto* produtos, int total) {
	char opcao;
	do {
		printf("\nMenu:\n");
		printf("A - Preencha os dados\n");
		printf("B - Exibir produtos sem estoque\n");
		printf("C - Exibir produtos em estoque\n");
		printf("D - Finalizar\n");
		printf("Escolha uma opcao: ");
		scanf(" %c", &opcao);
		switch (opcao) {

		case 'a':
			preencherDados(produtos, total);
			break;

		case 'b':
			exibirSemEstoque(produtos, total);
			break;

		case 'c':
			exibirComEstoque(produtos, total);
			break;

		case 'd':
			printf("Finalizando...\n");
			break;
		default:
			printf("Opcao invalida!\n");
		}
	} while (opcao != 'D' && opcao != 'd');
}
int solicitarQuantidadeProdutos() {
	int n;
	do {
		printf("Digite a quantidade de produtos a registrar: ");
		scanf("%d", &n);
		if (n <= 0) printf("Valor invalido\n");
	} while (n <= 0);
	return n;
}
void registrarNome(Produto* produto) {
	do {
		printf("Nome do produto: ");
		getchar();
		fgets(produto->nome, 41, stdin);
		produto->nome[strcspn(produto->nome, "\n")] = '\0';
		if (strlen(produto->nome) == 0)
			printf("Nome nao pode ser vazio.\n");
	} while (strlen(produto->nome) == 0);
}
void registrarPreco(Produto* produto) {
	float valor;
	do {
		printf("Digite o preço do produto: ");
		scanf("%f", &valor);
		if (valor < 0) {
			printf("O preço deve ser zero ou positivo.\n");
		}
	} while (valor < 0);
	produto->preco = valor;
}

void registrarQuantidade(Produto* produto) {
	int qtd;
	do {
		printf("Digite a quantidade do produto: ");
		scanf("%d", &qtd);
		if (qtd < 0) {
			printf("A quantidade deve ser zero ou positiva.\n");
		}
	} while (qtd < 0);
	produto->quantidade = qtd;
}

void preencherDados(Produto* produtos, int total) {
	for (int i = 0; i < total; i++) {
		printf("\n--- Produto %d ---\n", i + 1);
		registrarNome(&produtos[i]);
		registrarPreco(&produtos[i]);
		registrarQuantidade(&produtos[i]);
	}
}

void exibirSemEstoque(Produto* produtos, int total) {
	printf("\n--- Produtos com estoque zero ---\n");
	for (int i = 0; i < total; i++) {
		Produto* p = produtos + i;
		if (p->quantidade == 0) {
			printf("Código: %d | Nome: %s\n", p->codigo, p->nome);
		}
	}
}

void exibirComEstoque(Produto* produtos, int total) {
	printf("\n--- Todos os produtos cadastrados ---\n");
	for (int i = 0; i < total; i++) {
		printf("Produto %d:\n", i + 1);
		printf("Nome: %s\n", produtos[i].nome);
		printf("Código: %d\n", produtos[i].codigo);
		printf("Preço: %.2f\n", produtos[i].preco);
		printf("Quantidade: %d\n\n", produtos[i].quantidade);
	}
}