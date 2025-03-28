#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    float base, altura, area;

    printf("Digite o valor da base do triangulo: ");
    scanf("%f", &base);

    printf("Digite o valor da altura do triangulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;
    printf("A area do triangulo eh: %.2f", area);
    
    return 0;
}