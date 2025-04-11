#include <stdio.h>

int main(int argc, char* argv[]){
    int alunos, n, aprovados = 0, opcao, posicao;
    float media, maior, menor;
    float soma = 0;
    
    
    printf("Digite a quantidade de alunos:\n");
    scanf("%i", &alunos);

    float notas[alunos];

    printf("Digite a nota dos alunos:\n");

    for(n = 0; n < alunos; n++){
        scanf("%f", &notas[n]);
    }

    for(n = 0; n < alunos; n++){
        printf("Nota %i eh: %2.f\n", n, notas[n]);
    }
    
    for(n = 0; n < alunos; n++){
        soma += notas[n];
    }

    media = (soma / alunos);
    printf("\nA media das notas dos alunos eh: %2.f\n", media);

    maior = notas[0];

    for(n = 0; n < alunos; n++){
        if (notas[n] > maior){
            maior = notas[n];
        }
    }

    printf("A maior nota eh: %2.f\n", maior);

    menor = notas[0];

    for(n = 0; n < alunos; n++){
        if (notas[n] < menor){
            menor = notas[n];
        }
    }

    printf("A menor nota eh: %2.f\n", menor);

    for(n = 0; n < alunos; n++){
        if (notas[n] >= 6){
            aprovados++;
        }
    }
    printf("A quantidade de alunos aprovados eh: %i\n", aprovados);

    printf("Deseja consultar uma nota especifica?\n");
    printf("1 - sim\n");
    printf("2 - nao\n");
    scanf("%i", &opcao);

    if(opcao == 1){
        printf("Digite a posicao da nota desejada entre 0 e %i:\n", alunos);
        scanf("%i", &posicao);
        printf("A nota escolhida eh: %2.f\n", notas[posicao]);
    }
    

    return 0;
}