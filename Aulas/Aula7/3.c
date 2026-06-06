#include <stdio.h>

int potencia(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) result *= base;
    return result;
}

int fatorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) result *= i;
    return result;
}

int ehPrimo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    printf("%d ao quadrado = %d\n", num, potencia(num, 2));
    printf("Fatorial de %d = %d\n", num, fatorial(num));
    printf("%d %s primo.\n", num, ehPrimo(num) ? "é" : "NÃO é");

    return 0;
}