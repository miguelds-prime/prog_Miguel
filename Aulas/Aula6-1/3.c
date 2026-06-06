#include <stdio.h>

typedef struct {
    char nome[50];
    int pontos;
    int vitorias;
} Jogador;

int main() {

    int n;
    scanf("%d", &n);
    Jogador lista[n];

    for (int i = 0; i < n; i++) {
        printf("\n--- Jogador %d ---\n", i + 1);
        printf("Nome: ");
        scanf("%49s", lista[i].nome);
        printf("Pontos: ");
        scanf("%d", &lista[i].pontos);
        printf("Vitórias: ");
        scanf("%d", &lista[i].vitorias);
    }

    int iMaisPontos = 0;
    int iMaisVitorias = 0;
    float somaVitorias = 0;

    for (int i = 0; i < n; i++) {
        somaVitorias += lista[i].vitorias;
        if (lista[i].pontos > lista[iMaisPontos].pontos) iMaisPontos = i;
        if (lista[i].vitorias > lista[iMaisVitorias].vitorias) iMaisVitorias = i;
    }

    float mv = somaVitorias / n;

    int acimaMedia = 0;
    for (int i = 0; i < n; i++) {
        if (lista[i].vitorias > mv) acimaMedia++;
    }

    printf("\n===== RANKING =====\n");
    printf("%-20s %8s %8s\n", "NOME", "PONTOS", "VITÓRIAS");
    for (int i = 0; i < n; i++) {
        printf("%-20s %8d %8d\n", lista[i].nome, lista[i].pontos, lista[i].vitorias);
    }
    
    printf("Mais pontos: %s (%d)\n", lista[iMaisPontos].nome, lista[iMaisPontos].pontos);
    printf("Mais vitórias: %s (%d)\n", lista[iMaisVitorias].nome, lista[iMaisVitorias].vitorias);
    printf("Acima da média de vitórias: %d jogador(es)\n", acimaMedia);

    return 0;
}