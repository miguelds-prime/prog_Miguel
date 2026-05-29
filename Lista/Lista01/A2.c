#include <stdio.h>

struct Placar {
    char t1 [50];
    char t2 [50];
    int gt1;
    int gt2;
};

int main () {
    struct Placar times;
    scanf("%s", times.t1);
    scanf("%d", times.gt1);
    scanf("%s", times.t1);
    scanf("%d", times.gt1);

    printf ("-----PLACAR-----\n%s: %d X %s: %d\n", times.t1,)
}