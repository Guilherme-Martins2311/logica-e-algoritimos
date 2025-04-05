#include <stdio.h>

int main(int argc, char* agrv[]){
    char opcao;
    float celsius, kelvin, fahr;

    printf("Escolha uma das escalas de temperatura para fazer a conversao:\n");
    printf("k - kelvin\n");
    printf("f - Fahrenheit\n");
    scanf("%c", &opcao);

    printf("Digite quantos graus voce deseja converter:\n");
    scanf("%f", &celsius);

    switch(opcao){
        case 'k':
            kelvin = celsius + 273.15;
            printf("%.2f graus celsius convertido para Kelvin eh:\n%.2f", celsius, kelvin);
            break;
        case 'f':
            fahr = celsius * 1.8 + 32;
            printf("%.2f graus celsius convertido para Fahrenheit eh:\n%.2f", celsius, fahr);
            break;
        default:
            printf("opcao invalida");    
    }
    return 0;
}