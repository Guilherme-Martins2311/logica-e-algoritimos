#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

float calcularMedia(Aluno alunos[], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += alunos[i].nota;
    }
    return soma / tamanho;
}

int main() {
    Aluno alunos[10];

    for (int i = 0; i < 10; i++) {
        // Nome
        printf("\nDigite o nome do aluno %i: ", i + 1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0'; // remove o \n do final

        // Idade
        printf("Digite a idade do aluno %i: ", i + 1);
        scanf("%d", &alunos[i].idade);

        // Nota
        printf("Digite a nota do aluno %i: ", i + 1);
        scanf("%f", &alunos[i].nota);

        getchar(); // consome o \n que sobrou do scanf antes da próxima iteração
    }

    float media = calcularMedia(alunos, 10);
    
    printf("\n--- Dados dos alunos ---\n");
    for (int i = 0; i < 10; i++) {
        printf("\nAluno %d:\n", i + 1); 
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota: %.2f\n", alunos[i].nota);
    }

    printf("\nA media das notas dos alunos eh: %.2f\n", media);

    return 0;
}