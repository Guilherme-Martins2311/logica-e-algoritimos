#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Ponto{
    float x[2];
    float y[2];
} Ponto;

float posicao(Ponto numero){
    return sqrt(pow(numero.x[1] - numero.x[0], 2) + pow(numero.y[1] - numero.y[0], 2));
}

int main(int argc, char* argv[]){

    if (argc < 5) {
        printf("Uso: %s <x0> <x1> <y0> <y1>\n", argv[0]);
        return 1;
    }

    Ponto numero;

    numero.x[0] = atof(argv[1]);
    numero.x[1] = atof(argv[2]);

    numero.y[0] = atof(argv[3]);
    numero.y[1] = atof(argv[4]);

    float resultado = posicao(numero);

    printf("A distancia eh: %.2f", resultado);


    return 0;
}