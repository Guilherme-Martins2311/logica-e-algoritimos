#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    float area, raio;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    area = (powf(raio, 2)) * M_PI;
    //pode ser também: area = (raio * raio) * pi

    printf("A area do circulo eh: %.2f", area);
    return 0;
}