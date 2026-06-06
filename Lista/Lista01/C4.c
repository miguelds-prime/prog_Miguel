#include <stdio.h>

typedef struct {
    char nome[50];
    float n1, n2, n3;
    float media;
    char conceito;
} Aluno;

float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

char definirConceito(float media) {
    if (media >= 9) return 'A';
    if (media >= 7) return 'B';
    if (media >= 5) return 'C';
    return 'D';
}

void imprimirSituacao(Aluno a) {
    printf("%-20s | Média: %.1f | Conceito: %c\n", a.nome, a.media, a.conceito);
}

void ordenarPorNota(Aluno turma[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int iMaior = i;
        for (int j = i + 1; j < n; j++)
            if (turma[j].media > turma[iMaior].media) iMaior = j;
        Aluno temp = turma[i];
        turma[i] = turma[iMaior];
        turma[iMaior] = temp;
    }
}

int main() {
    
    int n;
    printf("Quantos alunos? ");
    scanf("%d", &n);

    Aluno turma[n];

    for (int i = 0; i < n; i++) {
        printf("\nNome do aluno: ");
        scanf("%49s", turma[i].nome);
        printf("3 notas: ");
        scanf("%f %f %f", &turma[i].n1, &turma[i].n2, &turma[i].n3);
        turma[i].media = calcularMedia(turma[i].n1, turma[i].n2, turma[i].n3);
        turma[i].conceito = definirConceito(turma[i].media);
    }

    ordenarPorNota(turma, n);

    printf("\nBoletim ordenado:\n");
    for (int i = 0; i < n; i++) {
        imprimirSituacao(turma[i]);
    }

    return 0;
}