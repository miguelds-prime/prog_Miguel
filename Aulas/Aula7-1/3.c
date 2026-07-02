#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float n1, n2, n3;
    float media;
    char conceito;
} Aluno;

void Turmar(Aluno turma[], int n);
void calcularMediasTurma(Aluno turma[], int n);
void imprimirTurma(Aluno turma[], int n);
int encontrarDestaque(Aluno turma[], int n);
Aluno calcularMedia(Aluno a);
Aluno definirConceito(Aluno a);
void PorMedia(Aluno turma[], int n);

int main() {
    int n;
    printf("Quantos alunos? ");
    scanf("%d", &n);

    Aluno turma[n];
    Turmar(turma, n);
    calcularMediasTurma(turma, n);
    PorMedia(turma, n);
    imprimirTurma(turma, n);

    int dest = encontrarDestaque(turma, n);
    printf("\nDestaque: %s (%.1f)\n", turma[dest].nome, turma[dest].media);
    return 0;
}

void PorMedia(Aluno turma[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int iMaior = i;
        for (int j = i + 1; j < n; j++)
            if (turma[j].media > turma[iMaior].media) iMaior = j;
        Aluno temp = turma[i];
        turma[i] = turma[iMaior];
        turma[iMaior] = temp;
    }
}