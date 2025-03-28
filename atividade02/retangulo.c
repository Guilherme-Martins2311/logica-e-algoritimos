#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    float base, altura, area;

    printf("Digite o valor da base do retangulo: ");
    scanf("%f", &base);

    printf("Digite o valor da altura do retangulo: ");
    scanf("%f", &altura);

    area = base * altura;
    printf("A area do retangulo eh: %.2f", area);
    
    return 0;
}