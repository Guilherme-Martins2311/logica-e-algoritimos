#include <stdio.h>

#define TAM_NOME 64

struct Aluno{
    char nome[TAM_NOME];
    float nota;
} Aluno;

void imprimir_aluno(struct Aluno a){
    printf("Nome: %s \tnota: %.2f\n", a.nome, a.nota);
}

int main(int argc, char* argv[]){

    int n = 5;
    struct Aluno alunos[n];

    for(int i = 0; i < n; i++){
        printf("Digite o nome do aluno %d:\n", i);
        fgets(alunos[i].nome, TAM_NOME, stdin);

        printf("Digite a nota do aluno %d:\n", i);
        scanf(" %f", &alunos[i].nota);

    }



    return 0;
}