#include <stdio.h>

int main(){

    int mat [3][3];


 for ( int i = 0; i < 3; i ++) {
    for (int j = 0; j < 3; j ++) {
        scanf ("%d", & mat [i ][ j ]) ;
 }
 }

printf (" Elementos da Diagonal Principal :\n") ;
for ( int i = 0; i < 3; i ++) {
    for (int j = 0; j < 3; j ++) {
        if (i == j ) {
        printf ("%d ", mat [ i ][ j ]) ;

}
}
}

printf ("\n") ;

return 0;
}