#include <stdio.h>
#include <stdlib.h>
#include "AlgoritmoBubble.h"


int main() {
	
	Bubble *b = create(5);

	add(b, 99, 550.0);
	add(b, 34, 400.6);
	add(b, 2, 330.0);
	add(b, 21, 100.0);
	add(b, 3, 240.0);
	
	imprimir(b);
	
	bubbleSort(b);
	
	imprimir(b);
	
	return 0;
}
