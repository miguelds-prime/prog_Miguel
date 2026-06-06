#include <stdio.h>

float so(float a, float b) {
    return a + b;
}

float su(float a, float b) {
    return a - b;
}

float m(float a, float b) {
    return a * b;
}

float d(float a, float b, int *erro) {
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
    int erro = 0;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("\n--- Resultados ---\n");
    printf("Soma: %.2f\n", so(num1, num2));
    printf("Subtração: %.2f\n", su(num1, num2));
    printf("Multiplicação: %.2f\n", m(num1, num2));

    float resultado = d(num1, num2, &erro);
    if (erro) {
        printf("Divisão: Erro! Não é possível dividir por zero.\n");
    } else {
        printf("Divisão: %.2f\n", resultado);
    }

    return 0;
}