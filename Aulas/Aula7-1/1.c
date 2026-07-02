#include <stdio.h>

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
    float totalEstoque;
} Produto;

void lerProdutos(Produto est[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Produto %d:\n", i+1);
        printf("Nome: ");
        scanf("%49s", est[i].nome);
        printf("Preço: ");
        scanf("%f", &est[i].preco);
        printf("Quantidade: ");
        scanf("%d", &est[i].quantidade);
    }
}

void cEstoque(Produto est[], int n) {
    for (int i = 0; i < n; i++) {
        est[i].totalEstoque =
        [i].preco * est[i].quantidade;
    }
}

void iEstoque(Produto est[], int n) {
    float totalGeral = 0;
    printf("\n%-20s | %8s | %8s | %12s\n", "Produto", "Preço", "Qtd", "Total Estoque");
    printf("-------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-20s | %8.2f | %8d | %12.2f\n", est[i].nome, est[i].preco, est[i].quantidade, est[i].totalEstoque);
        totalGeral += est[i].totalEstoque;
    }
    
    printf("-------------------------------------------------------------\n");
    printf("Total Geral: R$ %.2f\n", totalGeral);
}

int MaiorEstoque(Produto est[], int n) {
    int iMaior = 0;
    for (int i = 1; i < n; i++) {
        if (est[i].totalEstoque > est[iMaior].totalEstoque) iMaior = i;
    }

    return iMaior;

}

int MenorPreco(Produto est[], int n) {
    int iMenor = 0;
    for (int i = 1; i < n; i++) {
        if (est[i].preco < est[iMenor].preco) iMenor = i;
    }

    return iMenor;

}

int main() {

    int n = 3;
    Produto est[n];
    lerProdutos(est, n);
    calcularEstoque(est, n);
    imprimirEstoque(est, n);
    int maior = MaiorEstoque(est, n);
    int menor = MenorPreco(est, n);

    printf("\nMaior estoque: %s (R$ %.2f)\n", est[maior].nome, est[maior].totalEstoque);
    printf("Menor preço: %s (R$ %.2f)\n", est[menor].nome, est[menor].preco);

    return 0;
}