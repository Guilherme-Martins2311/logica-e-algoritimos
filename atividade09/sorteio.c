#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]){

    FILE *log = fopen("log.txt", "a");

    if(log == NULL){
        printf("erro ao abrir o arquivo");
        return 1;
    }

    int n_min = atof(argv[1]);
    int n_max = atof(argv[2]);
    int n_escolhido = atof(argv[3]);

    if(n_min >= n_max){
        printf("Numero Invalido.\n");
        return 1;
    } else if(n_escolhido < n_min || n_escolhido > n_max){
        printf("Numero Invalido.\n");
        return 1;
    }

    srand(time(NULL));

    int n_sorteado = n_min + rand() % (n_max - n_min + 1);

    printf("Numero sorteado: %d\n", n_sorteado);

    fprintf(log, "\nNumero minimo: %d\n", n_min);
    fprintf(log, "Numero maximo: %d\n", n_max);
    fprintf(log, "Numero esperado: %d\n", n_escolhido);
    fprintf(log, "Numero sorteado: %d\n", n_sorteado);

    if(n_sorteado == n_escolhido){
        printf("Voce foi sorteado!\n");
        fprintf(log, "Resultado: Foi sorteado\n");
    }else{
        printf("Voce nao foi sorteado!\n");
        fprintf(log, "Resultado: Nao foi sorteado\n");
    }

    return 0;
}