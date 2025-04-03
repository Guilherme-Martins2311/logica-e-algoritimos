#include <stdio.h>
#include <math.h>

int main(int argc, char* argv []){
    float lado, raio;
    float base, altura, area;
    float base_maior, base_menor;
    float diagonal_maior, diagonal_menor;
    char opcao;
    
    printf("area.c\n");
    printf("Escolha uma opcao: \n");
    printf("c - Circulo\n");
    printf("l - Losango\n");
    printf("q - Quadrado\n");
    printf("r - Retangulo\n");
    printf("t - Triangulo\n");
    printf("z - Trapezio\n");

    scanf("%c", &opcao);

    switch(opcao){
        case 'c':
            printf("Circulo\n");
            printf("Digite o valor do raio do circulo: ");
            scanf("%f", &raio);
            area = (powf(raio, 2)) * M_PI;
            printf("A area do circulo eh: %.2f", area);
            break;
        case 'l':
            printf("Losango\n");
            printf("Digite o valor da diagonal maior do losango: ");
            scanf("%f", &diagonal_maior);
            printf("Digite o valor da diagonal menor do losango: ");
            scanf("%f", &diagonal_menor);
            area = (diagonal_maior * diagonal_menor) / 2;
            printf("A area do losango eh: %2.f", area);
            break;
        case 'q':
            printf("Quadrado\n");
            printf("Digite o valor do lado do quadrado: ");
            scanf("%f", &lado);
            area = lado * lado;
            printf("A area do quadrado eh: %.2f", area);
            break;
        case 'r':
            printf("Retangulo\n");
            printf("Digite o valor da base do retangulo: ");
            scanf("%f", &base);
            printf("Digite o valor da altura do retangulo: ");
            scanf("%f", &altura);
            area = base * altura;
            printf("A area do retangulo eh: %.2f", area);
            break;
        case 't':
            printf("Triangulo\n");
            printf("Digite o valor da base do triangulo: ");
            scanf("%f", &base);
            printf("Digite o valor da altura do triangulo: ");
            scanf("%f", &altura);
            area = (base * altura) / 2;
            printf("A area do triangulo eh: %.2f", area);
            break;
        case 'z':
            printf("Trapezio\n");
            printf("Digite o valor da base maior do trapezio: ");
            scanf("%f", &base_maior);
            printf("Digite o valor da base menor do trapezio: ");
            scanf("%f", &base_menor);
            printf("Digite o valor da altura do trapezio: ");
            scanf("%f", &altura);
            area = ((base_maior + base_menor) * altura) / 2;
            printf("A area do trapezio eh: %.2f", area);
            break;
    default:
        printf("opcao invalida");

    }
return 0;
}