#include <stdio.h>

#define MAX_ALUNOS 100

int main() {

    int n;
    int i;
    int acima_media = 0;
    char nomes[MAX_ALUNOS][50];
    float notas[MAX_ALUNOS];
    float soma = 0;
    float media = 0;

    printf("Digite o numero de alunos (max %d): ", MAX_ALUNOS);
    scanf("%d", &n);

    if (n > MAX_ALUNOS) {
        n = MAX_ALUNOS;
    }

    for (i = 0; i < n; i++) {
        printf("\nAluno %d\n", i + 1);
        scanf(" %[^\n]s", nomes[i]);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    if (n > 0) {
        media = soma / n;
    }

    printf("\n--- Tabela de Notas ---\n");
    for (i = 0; i < n; i++) {
        printf("Nome: %-20s | Nota: %.2f\n", nomes[i], notas[i]);
    }

    printf("\nMedia da turma: %.2f\n", media);

    for (i = 0; i < n; i++) {
        if (notas[i] > media) {
            acima_media++;
        }
    }
    printf("Quantidade de alunos acima da media: %d\n", acima_media);

    return 0;
}