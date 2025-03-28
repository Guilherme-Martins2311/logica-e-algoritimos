#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    float base_maior, base_menor, altura, area;

    printf("Digite o valor da base maior do trapezio: ");
    scanf("%f", &base_maior);

    printf("Digite o valor da base menor do trapezio: ");
    scanf("%f", &base_menor);

    printf("Digite o valor da altura do trapezio: ");
    scanf("%f", &altura);

    area = ((base_maior + base_menor) * altura) / 2;
    printf("A area do trapezio eh: %.2f", area);
    
    return 0;
}