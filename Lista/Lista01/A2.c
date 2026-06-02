#include <stdio.h>

struct Placar {
    char t1 [50];
    char t2 [50];
    int gt1;
    int gt2;
};

int main () {
    struct Placar times;
    scanf("%49s", times.t1);
    scanf("%d", times.gt1);
    scanf("%49s", times.t1);
    scanf("%d", times.gt1);

    printf ("-----PLACAR-----\n%s: %d X %s: %d\n", times.t1,times.gt1, times.t2,times.gt2 );

    if (times.gt1 > times.gt2) {
        printf ("%s Ganhou/n", times.t1);
    } else if (times.gt2 > times.gt1){
        printf ("%s Ganhou/n", times.t2);
    } else if (times.gt2 == times.gt1){
        printf ("EMPATOU/n");
        }
        return 0;
}