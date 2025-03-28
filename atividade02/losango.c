#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    float diagonal_maior, diagonal_menor, area;

    printf("Digite o valor da diagonal maior do losango: ");
    scanf("%f", &diagonal_maior);
    
    printf("Digite o valor da diagonal menor do losango: ");
    scanf("%f", &diagonal_menor);

    area = (diagonal_maior * diagonal_menor) / 2;
    printf("A area do losango eh: %2.f", area);

    return 0;
}