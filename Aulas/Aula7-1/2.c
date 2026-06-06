#include <stdio.h>

typedef struct {
    char nome[50];
    int vitorias;
    int empates;
    int derrotas;
    int pontos;
} Time;

void lerTimes(Time times[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Time %d:\n", i+1);
        printf("Nome: ");
        scanf("%49s", times[i].nome);
        printf("Vitórias: ");
        scanf("%d", &times[i].vitorias);
        printf("Empates: ");
        scanf("%d", &times[i].empates);
        printf("Derrotas: ");
        scanf("%d", &times[i].derrotas);
    }
}

void calcularPontos(Time times[], int n) {
    for (int i = 0; i < n; i++) {
        times[i].pontos = times[i].vitorias * 3 + times[i].empates;
    }
}

void imprimirClassificacao(Time times[], int n) {
    printf("\n%-20s | %8s\n", "Time", "Pontos");
    printf("-----------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-20s | %8d\n", times[i].nome, times[i].pontos);
    }
}

int encontrarLider(Time times[], int n) {
    int iLider = 0;
    for (int i = 1; i < n; i++) {
        if (times[i].pontos > times[iLider].pontos) iLider = i;
    }
    return iLider;
}

int main() {
    
    int n = 3;
    Time times[n];
    lerTimes(times, n);
    calcularPontos(times, n);
    imprimirClassificacao(times, n);
    int lider = encontrarLider(times, n);

    printf("\nLíder: %s (%d pontos)\n", times[lider].nome, times[lider].pontos);

    return 0;
}