#include "produtos.h"
int main() {
	srand(time(NULL));
	int total = solicitarQuantidadeProdutos();
	Produto* produtos = malloc(total * sizeof(Produto));
	if (!produtos) {
		if (!produtos
		) {
			return 1;
		}
		menu(produtos, total);
		free(menu);
	}
}
