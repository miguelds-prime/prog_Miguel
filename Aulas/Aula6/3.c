#include <stdio.h>

#define MAX_ALUNOS 100

int main() {

    int n;
    int i;
    int acima_media = 0;
    int idx_maior = 0, idx_menor = 0;
    char nomes[MAX_ALUNOS][50];
    float notas[MAX_ALUNOS];
    float soma = 0, media = 0;

    printf("Digite o numero de alunos (maximo %d): ", MAX_ALUNOS);
    scanf("%d", &n);

    if (n <= 0 || n > MAX_ALUNOS) {
        printf("Quantidade de alunos invalida.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]s", nomes[i]);
        printf("Nota: ");
        scanf("%f", &notas[i]);

        soma += notas[i];
    }

    media = soma / n;

    printf("\n========================================\n");
    printf("            BOLETIM DA TURMA            \n");
    printf("========================================\n");
    printf("%-30s | %s\n", "Nome", "Nota");
    printf("----------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%-30s | %.2f\n", nomes[i], notas[i]);

        if (notas[i] > media) {
            acima_media++;
        }
    }

    printf("----------------------------------------\n");
    printf("Media da turma: %.2f\n", media);
    printf("Alunos acima da media: %d\n", acima_media);

    for (i = 1; i < n; i++) {
        if (notas[i] > notas[idx_maior]) {
            idx_maior = i;
        }
        if (notas[i] < notas[idx_menor]) {
            idx_menor = i;
        }
    }

    printf("\n========================================\n");
    printf("           DESTAQUES DA TURMA           \n");
    printf("========================================\n");
    printf("Maior Nota: %.2f (Aluno: %s)\n", notas[idx_maior], nomes[idx_maior]);
    printf("Menor Nota: %.2f (Aluno: %s)\n", notas[idx_menor], nomes[idx_menor]);

    return 0;
}