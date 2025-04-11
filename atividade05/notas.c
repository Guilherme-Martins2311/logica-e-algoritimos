#include <stdio.h>

int main(int argc, char* argv[]){
    int alunos, n;
    float media, maior, menor, soma;
    
    printf("Digite a quantidade de alunos:\n");
    scanf("%i", &alunos);

    float notas[alunos];

    printf("Digite a nota dos alunos:\n");

    for(n = 0; n < alunos; n++){
        scanf("%f", &notas[n]);
    }
    

    for(n = 0; n < alunos; n++){
        soma += notas[n];
    }

    media = (soma / alunos);
    printf("A media das notas dos alunos eh: %2.f\n", media);

    return 0;
}