#include <stdio.h>

int main(int argc, char* argv[]){
    int numero = 0;
    int resultado;

    do{
    resultado = numero++;
    printf("%i\n", resultado);
    }while (numero <= 100);

    return 0;
}