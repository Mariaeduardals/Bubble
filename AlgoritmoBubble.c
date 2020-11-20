#include <stdio.h>
#include <stdlib.h>
#include "AlgoritmoBubble.h"

struct produto{
		int codigo;
		float valor;
	};

	typedef struct produto Produto;

	struct bubble{
		Produto** vetor;
		int n;
		int contador;
	};
	
	typedef struct bubble Bubble;
	
	Produto* novoProduto(int codigo, float valor){
			Produto *p = (Produto*) malloc(sizeof(Produto)); 
				
				if(p != NULL){
				p->codigo = codigo;
				p->valor = valor;
			}
				return p; 
}


Bubble* create(int n){
	 
	Bubble *b = (Bubble *)malloc(sizeof(Bubble));
		 
	if (b != NULL) {
		b->n = n;
		b->contador = 0;
		b->vetor = (Produto**) malloc(sizeof(Produto)*n);
	}
	
	return b;
}

void bubbleSort(Bubble *v) {
    int i, j;

	Produto *p;
	printf("\nOndenando com o algoritmo BubbleSort ..\n");
	
    for (i = 0; i < v->n -1; i++) {

        for (j = 0; j < v->n - i - 1; j++) {
        	
            if (v->vetor[j]->codigo > v->vetor[j + 1]->codigo) {
                p = v->vetor[j];
                v->vetor[j] = v->vetor[j + 1];
                v->vetor[j + 1] = p;
            }
        }
    }
}

int add(Bubble *v, int codigo, float valor){
	
	Produto *p = novoProduto(codigo, valor);
	
	if(p != NULL && v != NULL && v->contador < v->n){
		v->vetor[v->contador++] = p;
		return 1; 
	}else
		return 0;
	
}

void imprimir(Bubble *v){
	int i;
 	for(i = 0; i < v->contador; i++){
		printf("Produto[%i] = codigo: %i, valor: %.2f\n", i, v->vetor[i]->codigo,v->vetor[i]->valor);
		
	}
 }
