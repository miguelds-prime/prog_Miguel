#include <stdio.h>

struct Estoque {
    char nome[50];
    int quantidade;
    float preco;
};

int main(){

    int x;
    scanf("%d", &x);
    struct Estoque produto[x];
    float total;
    int maior = 0;

    for(int i = 0; i < x; i++){
        scanf("%s", produto[i].nome);
        scanf("%d", &produto[i].quantidade);
        scanf("%f", &produto[i].preco);
    }

    for(int i = 0; i < x; i++){
        total = produto[i].quantidade * produto[i].preco + total;
    }

    for(int i = 0; i < x; i++){
        printf("-----\nProduto: %s\nQuantidade: %d\nPreço: %.2f\n", produto[i].nome, produto[i].quantidade, produto[i].preco);
    }

    printf("-----TOTAL-----\nTotal Geral: %.2f\n", total);
    for(int i = 1; i < x; i++){
        if(produto[i].preco > produto[maior].preco){
           maior = i;
        }
        
    }
    printf("-----MAIS CARO-----\nProduto: %s\nValor: %.2f\n", produto[maior].nome, produto[maior].preco);
}