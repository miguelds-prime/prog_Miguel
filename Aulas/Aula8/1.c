#include <stdio.h>

int soma (int n) {
    if (n==0) return 0;

    return n + soma(n-1);
}

int main (){

    int n=0;
    scanf("%d", &n);
    printf ("%d/n", soma(n));
}