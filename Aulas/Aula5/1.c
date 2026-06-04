#include <stdio.h>
int main () {

int mat [2][3];
int soma = 0;

for ( int i = 0; i < 2; i ++) {
    for (int j = 0; j < 3; j ++) {
        scanf ("%d", & mat [i ][ j ]) ;
        soma = soma + mat [ i ][ j ];
    }
}

 printf ("A soma dos elementos e: %d\n", soma );

 return 0;
}