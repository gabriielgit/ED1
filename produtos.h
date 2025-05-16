#ifndef PRODUTOS_H
#define PRODUTOS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CODIGO_ALEATORIO (rand() % 51)

typedef struct {
	char nome[41];
	int codigo;
	float preco;
	int quantidade;
} Produto;

void menu(Produto* produtos, int total);
int solicitarQuantidadeProdutos();
void registrarNome(Produto* produto);
void registrarPreco(Produto* produto);
void registrarQuantidade(Produto* produto);
void preencherDados(Produto* produtos, int total);
void exibirSemEstoque(Produto* produtos, int total);
void exibirComEstoque(Produto* produtos, int total);
#endif
