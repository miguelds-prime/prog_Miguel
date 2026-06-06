#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float nota;
} Aluno;

int main() {

    int n;
    printf("Quantos alunos? ");
    scanf("%d", &n);

    Aluno turma[n];
    for (int i = 0; i < n; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);
        printf("Nome: ");
        scanf("%49s", turma[i].nome);
        printf("Nota: ");
        scanf("%f", &turma[i].nota);
    }

    char busca[50];
    printf("\nBuscar aluno: ");
    scanf("%49s", busca);

    int encontrado = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(turma[i].nome, busca) == 0) {
            printf("Encontrado: %s, nota %.1f\n", turma[i].nome, turma[i].nota);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) printf("Aluno não encontrado.\n");

    return 0;
}