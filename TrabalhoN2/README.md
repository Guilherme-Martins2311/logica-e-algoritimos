Compilar
gcc ordenador -o ordenador.c

Ordenar strings
./ordenador -s nomes.txt

Ordenar números
./ordenador -f numeros.txt

Objetivo
Desenvolver um programa em linguagem C que:
●	Leia um arquivo .txt com dados (strings ou números);
●	Ordene os dados;
●	Escreva um novo arquivo com os dados ordenados.


Resumo Funcional
O programa:
●	Usa alocação dinâmica (malloc, realloc, strdup);
●	Lê linha por linha de um arquivo;
●	Usa qsort com funções de comparação;
●	Gera um novo arquivo com o sufixo _sorted.txt.


Estrutura do Código

1. Bibliotecas Utilizadas:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

2. Funções Auxiliares:
●	comparar_strings: Compara duas strings para uso no qsort;
●	comparar_numeros: Compara dois números double para uso no qsort.

3. Função Principal – processar_arquivo
Parâmetros:
●	nome_arquivo: caminho do arquivo;
●	eh_string: 1 para ordenar strings, 0 para ordenar números.

Passos:
1.	Abre o arquivo;
2.	Lê linhas e converte para string ou número;
3.	Usa realloc para armazenar dados dinamicamente;
4.	Ordena com qsort;
5.	Cria o nome de saída com _sorted.txt;
6.	Escreve no novo arquivo;
7.	Libera memória alocada.

4. Função main:
Uso correto:
./programa -s arquivo.txt  // para strings
./programa -f arquivo.txt  // para floats

Exemplo de Funcionamento
Entrada (nomes.txt):
Carlos
Ana
Beatriz 
Eduardo

Comando:
./ordenador -s dados.txt

Saída (nomes_sorted.txt):
Ana
Beatriz 
Carlos
Eduardo

Cuidados e Tratamento de Erros
●	Verifica se o arquivo de entrada pode ser aberto;
●	Verifica se o arquivo de saída pode ser criado;
●	Valida a quantidade de argumentos da linha de comando;
●	Liberação adequada da memória.



