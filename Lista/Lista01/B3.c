#include <stdio.h>

struct Jogador {
    char nome[50];
    int pontos;
};

int main() {

    int maior = 1;
    int menor = 1;
    int n;
    scanf("%d", &n);
    struct Jogador jogadores[n];

    for(int i = 0; i < n; i++){
        scanf("%s", jogadores[i].nome);
        scanf("%d", &jogadores[i].pontos);
    }

    for(int i = 1; i < n; i++){
        if(jogadores[i].pontos > jogadores[maior].pontos){
           maior = i;
        }
    }
    
    for(int i = 1; i < n; i++){
        if(jogadores[i].pontos < jogadores[menor].pontos){
           menor = i;
        }
    }

    printf("O %s tem MAIS pontos com: %d pontos\nO %s tem MENOS pontos com %d pontos\n", jogadores[maior].nome, jogadores[maior].pontos, jogadores[menor].nome, jogadores[menor].pontos);
}