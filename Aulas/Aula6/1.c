#include <stdio.h>


struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

int main() {

    struct Produto algo;

    scanf(" %[^\n]s", algo.nome);
    scanf("%f", &algo.preco);
    scanf("%d", &algo.quantidade);

    float total = algo.preco * algo.quantidade;

    printf("\n");
    printf("Nome       : %s\n", algo.nome);
    printf("Preco      : R$ %.2f\n", algo.preco);
    printf("Quantidade : %d\n", algo.quantidade);
    printf("---------------------------------\n");
    printf("Valor total em estoque : R$ %.2f\n", total);

    return 0;
}