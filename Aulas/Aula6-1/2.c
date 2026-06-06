#include <stdio.h>

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int main() {

    int n;
    scanf("%d", &n);

    Produto estoque[n];
    for (int i = 0; i < n; i++) {
        printf("\n--- Produto %d ---\n", i + 1);
        scanf("%49s", estoque[i].nome);
        scanf("%f", &estoque[i].preco);
        scanf("%d", &estoque[i].quantidade);
    }

    int iMaior = 0;
    int iMenor = 0;
    float total = 0;

    for (int i = 0; i < n; i++) {
        float valorTotal = estoque[i].preco * estoque[i].quantidade;
        total += valorTotal;
        if (valorTotal > estoque[iMaior].preco * estoque[iMaior].quantidade) iMaior = i;
        if (estoque[i].preco < estoque[iMenor].preco) iMenor = i;
    }

    printf("\n===== ESTOQUE =====\n");
    printf("%-20s %8s %5s %10s\n", "NOME", "PREÇO", "QTD", "VALOR TOTAL");
    for (int i = 0; i < n; i++) {
        float valorTotal = estoque[i].preco * estoque[i].quantidade;
        printf("%-20s %8.2f %5d %10.2f\n", estoque[i].nome, estoque[i].preco, estoque[i].quantidade, valorTotal);
    }
    printf("Maior valor: %s (R$%.2f)\n", estoque[iMaior].nome, estoque[iMaior].preco * estoque[iMaior].quantidade);
    printf("Menor preço: %s (R$%.2f)\n", estoque[iMenor].nome, estoque[iMenor].preco);
    printf("Valor total em estoque: R$%.2f\n", total);

    return 0;
}