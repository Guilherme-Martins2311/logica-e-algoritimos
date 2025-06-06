#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]){

    int n_min, n_max, n_escolhido, n_sorteado = 1;

    n_min = atof(argv[1]);
    n_max = atof(argv[2]);
    n_escolhido = atof(argv[3]);

    srand(time(NULL));

    n_sorteado = rand() % (n_max++);

    printf("O numero sorteado eh: %d\n", n_sorteado);

    if(n_sorteado == n_escolhido){
        printf("Voce foi sorteado!\n");
    }else{
        printf("Voce nao foi sorteado!\n");
    }

    return 0;
}