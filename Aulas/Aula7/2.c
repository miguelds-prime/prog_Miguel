#include <stdio.h>

float cm(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

char definirConceito(float media) {
    if (media >= 9) return 'A';
    if (media >= 7) return 'B';
    if (media >= 5) return 'C';
    return 'D';
}

void imprimirSituacao(char nome[], float media, char conceito) {
    printf("%-20s | Média: %.1f | Conceito: %c\n", nome, media, conceito);
}

int main() {
    int n;
    printf("Quantos alunos? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char nome[50];
        float n1, n2, n3;
        printf("\nNome do aluno: ");
        scanf("%49s", nome);
        printf("3 notas: ");
        scanf("%f %f %f", &n1, &n2, &n3);

        float media = cm(n1, n2, n3);
        char conceito = definirConceito(media);
        imprimirSituacao(nome, media, conceito);
    }

    return 0;
}