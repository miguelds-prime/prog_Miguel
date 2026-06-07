#include <stdio.h>

void imprimirMenu() {
    printf("\n=== CALCULADORA ===\n");
    printf("1. Calcular média de 3 notas\n");
    printf("2. Verificar se número é primo\n");
    printf("3. Calcular potência\n");
    printf("0. Sair\n");
    printf("Opção: ");
}

float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

int ehPrimo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int potencia(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    
    int opcao;
    do {
        imprimirMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                float n1, n2, n3;
                printf("Digite 3 notas: ");
                scanf("%f %f %f", &n1, &n2, &n3);
                float media = calcularMedia(n1, n2, n3);
                printf("Média: %.2f\n", media);
                break;
            }
            case 2: {
                int num;
                printf("Digite um número: ");
                scanf("%d", &num);
                if (ehPrimo(num)) {
                    printf("%d é primo!\n", num);
                } else {
                    printf("%d NÃO é primo.\n", num);
                }
                break;
            }
            case 3: {
                int base, exp;
                printf("Base e expoente: ");
                scanf("%d %d", &base, &exp);
                printf("%d^%d = %d\n", base, exp, potencia(base, exp));
                break;
            }
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}