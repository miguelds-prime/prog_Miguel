#include <stdio.h>

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b, int *erro) {
    if (b == 0.0) {
        *erro = 1;
        return 0.0;
    }
    *erro = 0;
    return a / b;
}

int main() {

    float num1;
    float num2;
    int erroDivisao = 0;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("\n--- Resultados ---\n");
    printf("Soma: %.2f\n", somar(num1, num2));
    printf("Subtração: %.2f\n", subtrair(num1, num2));
    printf("Multiplicação: %.2f\n", multiplicar(num1, num2));

    float resultadoDivisao = dividir(num1, num2, &erroDivisao);
    if (erroDivisao) {
        printf("Divisão: Erro! Não é possível dividir por zero.\n");
    } else {
        printf("Divisão: %.2f\n", resultadoDivisao);
    }

    return 0;
}