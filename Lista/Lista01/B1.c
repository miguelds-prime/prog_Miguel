#include <stdio.h>

typedef struct {
    char nome[50];
    float nota;
} Aluno;

int main(){

    int n;
    float media;
    int aprovados;

    scanf("%d", &n);

    Aluno turma[n];

    for(int i = 0; i < n; i++){
        scanf("%s", turma[i].nome);
        scanf("%f", &turma[i].nota);
    }

    for(int i = 0; i < n; i++){
        media = media + turma[i].nota;
    }

    media = media / n;

    for(int i = 0; i < n; i++){
        printf("%s com nota %.1f\n", turma[i].nome, turma[i].nota);
    }

    for(int i = 0; i < n; i++){
        if(turma[i].nota >= 7){
            aprovados++;
        }
        
    }
    printf("Aprovados: %d\n", aprovados);
    printf("Media da turma: %.1f\n", media);
}