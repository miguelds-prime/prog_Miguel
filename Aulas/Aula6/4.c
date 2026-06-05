#include <stdio.h>

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

int main() {

    int n;
    scanf("%d", &n);

    struct Produto produtos[n];

    for (int i = 0; i < n; i++) {
        printf("\nProduto %d:\n", i + 1);
        scanf("%s", produtos[i].nome);
        scanf("%f", &produtos[i].preco);
        scanf("%d", &produtos[i].quantidade);
    }

    float total_geral = 0.0;
    float maior_valor_estoque = -1.0;
    int indice_maior_estoque = 0;

    printf("\n%-15s %-10s %-5s %-10s\n", "Produto", "Preco", "Qtd", "Total");
    printf("-----------------------------------------\n");

    for (int i = 0; i < n; i++) {
        float total_produto = produtos[i].preco * produtos[i].quantidade;
        total_geral += total_produto;

        printf("%-15s R$%7.2f %5d R$%7.2f\n", 
               produtos[i].nome, 
               produtos[i].preco, 
               produtos[i].quantidade, 
               total_produto);

        if (total_produto > maior_valor_estoque) {
            maior_valor_estoque = total_produto;
            indice_maior_estoque = i;
        }
    }

    printf("-----------------------------------------\n");
    printf("Total geral: R$%.2f\n", total_geral);
    printf("Maior estoque: %s (R$%.2f)\n", 
           produtos[indice_maior_estoque].nome, 
           maior_valor_estoque);

    return 0;
}