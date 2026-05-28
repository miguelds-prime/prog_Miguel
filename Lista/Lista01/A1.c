#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

    int main () {
        struct Pessoa dados;

        scanf ("%s", dados.nome);
        scanf ("%d", &dados.idade);
        scanf ("%f", &dados.altura);

        printf ("Nome: %s\nIdade: %d\nAltura: %.2f/n", dados.nome, dados.idade, dados.altura);

        return 0;
    }