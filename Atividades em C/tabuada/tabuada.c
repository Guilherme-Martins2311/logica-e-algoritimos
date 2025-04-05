#include <stdio.h>

int main(int argc, char* argv[]){
    int opcao, m1, m2, m3, m4, m5, m6, m7, m8, m9, m10;

    printf("tabuada.c\n");
    printf("Escolha um numero: \n");
    printf("2 - tabuada do 2\n");
    printf("3 - tabuada do 3\n");
    printf("4 - tabuada do 4\n");
    printf("5 - tabuada do 5\n");
    printf("6 - tabuada do 6\n");
    printf("7 - tabuada do 7\n");
    printf("8 - tabuada do 8\n");
    printf("9 - tabuada do 9\n");

    scanf("%i", &opcao);

    switch(opcao){
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        break;

    default:
    printf("opcao invalida");

    }
        printf("A tabuada de %d eh: \n", opcao);

        m1 = opcao * 1;
        m2 = opcao * 2;
        m3 = opcao * 3;
        m4 = opcao * 4;
        m5 = opcao * 5;
        m6 = opcao * 6;
        m7 = opcao * 7;
        m8 = opcao * 8;
        m9 = opcao * 9;
        m10 = opcao * 10;

    printf("%i * 1 = %i\n", opcao, m1);
    printf("%i * 2 = %i\n", opcao, m2);
    printf("%i * 3 = %i\n", opcao, m3);
    printf("%i * 4 = %i\n", opcao, m4);
    printf("%i * 5 = %i\n", opcao, m5);
    printf("%i * 6 = %i\n", opcao, m6);
    printf("%i * 7 = %i\n", opcao, m7);
    printf("%i * 8 = %i\n", opcao, m8);
    printf("%i * 9 = %i\n", opcao, m9);
    printf("%i * 10 = %i\n", opcao, m10);

    return 0;
}