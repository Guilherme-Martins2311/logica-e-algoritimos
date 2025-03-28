#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    float lado;
    float area;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado;
    printf("A area do quadrado eh: %.2f", area);
    
    return 0;
}