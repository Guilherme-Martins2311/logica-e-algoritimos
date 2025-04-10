#include <stdio.h>

int main(int argc, char* argv[]){
    int opcao, leve, intenso, terror, acao;

do{
    printf("Escolha um tipo de filme: \n");
    printf("1 - Leve \n");
    printf("2 - intenso \n");
    scanf("%u", &opcao);


    if(opcao == 1){
        printf("Escolha um genero de filme leve:\n");
        printf("1 - Comedia\n");
        printf("2 - animacao\n");
        scanf("%u", &leve);

        if(leve == 1){
            printf("O filme recomendado eh:\nGente Grande\n");
        }
        else if(leve == 2){
            printf("O filme recomendado eh:\nCarros\n");
    }
    }

    if(opcao == 2){

        printf("Escolha um genero de filme intenso:\n");
        printf("1 - terror\n");
        printf("2 - acao\n");
        scanf("%u", &intenso);

        if(intenso == 1){
            printf("Escolha um genero de filme de terro:\n");
            printf("1 - sobrenatural\n");
            printf("2 - psicologico\n");
            scanf("%u", &terror);
            if(terror == 1){
                printf("O filme recomendado eh:\nInvocacao do Mal\n");
            }
            else if(terror = 2){
                printf("O filme recomendado eh:\nUma noite de crime\n");
            }
            
        } 
        else if(intenso == 2){
            printf("Escolha um genero de filme de acao:\n");
            printf("1 - Super Heroi\n");
            printf("2 - acao realista\n");
            scanf("%u", &acao);
            if(acao == 1){
                printf("O filme recomendado eh:\nVingadores Ultimato\n");
            }
            else if(acao == 2){
                printf("O filme recomendado eh:\nSem Remorso\n");
            }

        }
    }

printf("\nDeseja escolher um novo filme?\n");
printf("0 - Sim\n");
printf("1 - Nao\n");
scanf("%d", &opcao);

} while (opcao == 0);

  return 0;
}