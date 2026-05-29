#include <stdio.h>

struct Produto {
    char nome;
    float preco;
    float quantidade;
};

int main () {
    struct Produto venda;
    float estoque;
    float desconto;
    float total;

    scanf("%s", venda.nome);
    scanf("%f", venda.preco);
    scanf("%d", venda.quantidade);

    estoque = venda.quantidade*venda.preco;
    desconto = estoque/10;
    total = estoque-desconto;

    printf ("%.2f", estoque);
    printf ("%.2f", total);

    return 0;
}