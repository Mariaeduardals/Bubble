

typedef struct produto Produto;

typedef struct bubble Bubble;

Produto* novoProduto(int codigo, float valor);

Bubble* create(int n);

void bubbleSort(Bubble *v);

int add(Bubble *v, int codigo, float valor);

void imprimir(Bubble *v);
