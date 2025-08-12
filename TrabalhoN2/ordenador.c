#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para comparar strings (usada pelo qsort)
int comparar_strings(const void *a, const void *b){
    return strcmp(*(const char **)a, *(const char **)b);
}

// Função para comparar números (usada pelo qsort)
int comparar_numeros(const void *a, const void *b) {
    double x = *(double *)a, y = *(double *)b;
    return (x > y) - (x < y);
}

// Função principal que processa o arquivo
void processar_arquivo(const char *nome_arquivo, int eh_string){
    FILE *arquivo = fopen(nome_arquivo, "r");
    if (!arquivo) {
        perror("erro ao abrir arquivo");
        exit(1);
    }

    // Variáveis para armazenar os dados
    char **strings = NULL;
    double *numeros = NULL;
    int contador = 0;
    char linha[256];

    // Lê o arquivo linha por linha
    while (fgets(linha, sizeof(linha), arquivo)){
        linha[strcspn(linha, "\n")] = '\0';
        
        if (eh_string) {
            // Aloca memória para a string
            strings = realloc(strings, (contador + 1) * sizeof(char *));
            strings[contador] = strdup(linha);
        }else {
            // Converte para número
            numeros = realloc(numeros, (contador + 1) * sizeof(double));
            numeros[contador] = atof(linha);
        }
        contador++;
    }
    fclose(arquivo);

    // Ordena os dados
    if (eh_string){
        qsort(strings, contador, sizeof(char *), comparar_strings);
    } else{
        qsort(numeros, contador, sizeof(double), comparar_numeros);
    }

    // Cria o nome do arquivo de saída
    char nome_saida[256];
    strcpy(nome_saida, nome_arquivo);
    char *ponto = strrchr(nome_saida, '.');
    if (ponto) *ponto = '\0';
    strcat(nome_saida, "_sorted.txt");

    // Escreve no arquivo de saída
    FILE *saida = fopen(nome_saida, "w");
    if (!saida) {
        perror("erro ao criar arquivo de saída");
        exit(1);
    }

    for (int i = 0; i < contador; i++) {
        if (eh_string) {
            fprintf(saida, "%s\n", strings[i]);
            free(strings[i]);
        } else {
            fprintf(saida, "%g\n", numeros[i]);
        }
    }
}

int main(int argc, char *argv[]){
    if (argc != 3 || (strcmp(argv[1], "-s") && strcmp(argv[1], "-f"))) {
        printf("Uso: %s -s|-f arquivo.txt\n", argv[0]);
        return 1;
    }

    processar_arquivo(argv[2], strcmp(argv[1], "-s") == 0);
    printf("Arquivo ordenado gerado com sucesso!\n");
    return 0;
}