#include <stdio.h>

typedef struct {
    char nome[50];
    float nota;
} Aluno;

int main() {

    int n;
    scanf("%d", &n);

    Aluno turma[n];
    for (int i = 0; i < n; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);
        scanf("%49s", turma[i].nome);
        scanf("%f", &turma[i].nota);
    }

    float soma = 0;
    int iMaior = 0;
    int iMenor = 0;
    int acima = 0;

    for (int i = 0; i < n; i++) {
        soma += turma[i].nota;
        if (turma[i].nota > turma[iMaior].nota) iMaior = i;
        if (turma[i].nota < turma[iMenor].nota) iMenor = i;
    }

    float media = soma / n;

    for (int i = 0; i < n; i++) {
        if (turma[i].nota > media) acima++;
    }

    printf("\n===== BOLETIM =====\n");
    printf("%-20s %5s\n", "NOME", "NOTA");

    for (int i = 0; i < n; i++) {
        printf("%-20s %5.1f\n", turma[i].nome, turma[i].nota);
    }

    printf("Média: %.1f\n", media);
    printf("Maior nota: %s (%.1f)\n", turma[iMaior].nome, turma[iMaior].nota);
    printf("Menor nota: %s (%.1f)\n", turma[iMenor].nome, turma[iMenor].nota);
    printf("Acima da média: %d aluno(s)\n", acima);

    return 0;
}