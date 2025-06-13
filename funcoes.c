
#include "biblioteca.h"
#include <ctype.h>

void menu() {
	char op;
	int cod;
	listaDupla* lista = NULL;

	do {
		printf("\nA - Inserir no início");
		printf("\nB - Inserir no fim");
		printf("\nC - Pesquisar");
		printf("\nD - Excluir");
		printf("\nE - Exibir");
		printf("\nF - Sair");
		printf("\nDigite sua opção: ");
		scanf(" %c", &op);
		op = toupper(op);

		switch (op) {
		case 'A':
			lista = inserirInicio(lista);
			break;
		case 'B':
			lista = inserirFim(lista);
			break;
		case 'C':
			cod = digitarCodigo();
			printf("\nNó encontrado: %p\n", pesquisarNo(cod, lista));
			break;
		case 'D':
			lista = excluirNo(lista);
			break;
		case 'E':
			exibirLista(lista);
			break;
		case 'F':
			break;
		default:
			printf("\nOpção inválida!");
		}

	} while (op != 'F');
}

listaDupla* inserirInicio(listaDupla* inicio) {
	listaDupla* novo = (listaDupla*)malloc(sizeof(listaDupla));
	novo->codigo = ALEATORIO();
	novo->anterior = NULL;
	novo->proximo = inicio;

	if (inicio != NULL) {
		inicio->anterior = novo;
	}

	return novo;
}

listaDupla* inserirFim(listaDupla* inicio) {
	listaDupla* novo = (listaDupla*)malloc(sizeof(listaDupla));
	novo->codigo = ALEATORIO();
	novo->proximo = NULL;

	if (inicio == NULL) {
		novo->anterior = NULL;
		return novo;
	}

	listaDupla* temp = inicio;
	while (temp->proximo != NULL) {
		temp = temp->proximo;
	}

	temp->proximo = novo;
	novo->anterior = temp;
	return inicio;
}

listaDupla* pesquisarNo(int codigo, listaDupla* lista) {
	while (lista != NULL) {
		if (lista->codigo == codigo) {
			return lista;
		}
		lista = lista->proximo;
	}
	return NULL;
}

listaDupla* excluirNo(listaDupla* lista) {
	int codigo = digitarCodigo();
	listaDupla* remover = pesquisarNo(codigo, lista);

	if (remover == NULL) {
		printf("\nCódigo não encontrado.\n");
		return lista;
	}

	if (remover->anterior != NULL) {
		remover->anterior->proximo = remover->proximo;
	} else {
		lista = remover->proximo;
	}

	if (remover->proximo != NULL) {
		remover->proximo->anterior = remover->anterior;
	}

	free(remover);
	return lista;
}

void exibirLista(listaDupla* lista) {
	while (lista != NULL) {
		printf("\n[%p] Código: %d | Ant: %p | Próx: %p",
			lista, lista->codigo, lista->anterior, lista->proximo);
		lista = lista->proximo;
	}
	printf("\n");
}

int digitarCodigo() {
	int num;
	do {
		printf("\nDigite o código: ");
		scanf("%d", &num);
		if (num < 0) printf("Código inválido!");
	} while (num < 0);
	return num;
}
