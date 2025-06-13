
#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

#include <stdio.h>
#include <stdlib.h>

#define ALEATORIO() rand() % 101

typedef struct dados listaDupla;

struct dados {
	int codigo;
	listaDupla* anterior;
	listaDupla* proximo;
};

void menu();
listaDupla* inserirInicio(listaDupla* inicio);
listaDupla* inserirFim(listaDupla* inicio);
void inserirFimUltimo(listaDupla** inicio, listaDupla** ultimo);
listaDupla* pesquisarNo(int codigo, listaDupla* lista);
listaDupla* excluirNo(listaDupla* lista);
void exibirLista(listaDupla* lista);
int digitarCodigo();

#endif /* BIBLIOTECA_H_ */
