/*
 ============================================================================
 Name        : ArvoresBinarias.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM 20

typedef char CHAVE [TAM + 1];
typedef struct {
   CHAVE nome;
   double preco;
} ITEM;

typedef struct NO_TAG *PONT;
typedef struct NO_TAG {
	ITEM item;
	PONT esq, dir;
}NO;

typedef PONT ARVORE;


void criar(ARVORE *arv) {
	*arv = NULL;
}

int pesquisa (ITEM *x, PONT *p) {
	if(*p == NULL)
		return -1;

	int comp = strncmp(x->nome, (*p)->item.nome, TAM);

	if(comp > 0) {
		return pesquisa(x, &(*p)->esq);
	}
	if(comp < 0) {
		return pesquisa(x, &(*p)->dir);
	}

	*x = (*p)->item;

	return 0;
}

int alteraPreco (ITEM *x, PONT *p) {
	if(*p == NULL)
		return -1;

	int comp = strncmp(x->nome, (*p)->item.nome, TAM);

	if(comp > 0) {
		return pesquisa(x, &(*p)->esq);
	}
	if(comp < 0) {
		return pesquisa(x, &(*p)->dir);
	}

	(*p)->item.preco = x->preco;

	return 0;
}

int insere (ITEM *x, PONT *p) {
	if (*p == NULL) {
		*p = (PONT) malloc (sizeof (NO));
		(*p)->item = (*x);
		(*p)->dir = NULL;
		(*p)->esq = NULL;
		return 0;
	}

	int comp = strncmp(x->nome, (*p)->item.nome, TAM);

	if(comp > 0) {
		return insere(x, &(*p)->esq);
	}
	if(comp < 0) {
		return insere(x, &(*p)->dir);
	}

	return -1;
}

void antecessor (PONT q, PONT *r) {
	if ((*r)->dir != NULL){
		antecessor (q, &(*r)->dir);
		return;
	}

	q->item = (*r)->item;
	q = *r;
	*r = (*r)->esq;
	free(q);
}


int retira (ITEM *x, PONT *p) {
	if(*p == NULL)
		return -1;

	PONT aux;

	int comp = strncmp(x->nome, (*p)->item.nome, TAM);

		if(comp > 0) {
			return retira(x, &(*p)->esq);
		}

		if(comp < 0) {
			return retira(x, &(*p)->dir);
		}

		if((*p)->dir == NULL){
			aux = *p;
			*p =(*p)->esq;
			free(aux);
			return 0;
		}

		if((*p)->esq == NULL){
			aux = *p;
			*p = (*p)->dir;
			free(aux);
			return 0;
		}

		antecessor(*p, &(*p)->esq);

		return 0;
}


int main(void) {
	ARVORE *arvore;
	criar(&arvore);
	return 0;
}


