#include <stdio.h>

int main(int argc, char* argv[]){
    char operacao;
    float n1, n2, resultado;

    printf("Escolha qual operacao voce deseja fazer\n");
    printf("+ - Soma\n");
    printf("- - Subitracao\n");
    printf("* - Multiplicacao\n");
    printf("/ - Divisao\n");
    scanf("%c", &operacao);

    printf("Digite os numeros que voce deseja fazer a operacao\n");
    scanf("%f", &n1);
    scanf("%f", &n2);

    switch(operacao){
        case '+':
            resultado = n1 + n2;
            printf("O resultado da soma entre %.2f e %.2f eh %.2f", n1, n2, resultado);
            break;
        case '-':
            resultado = n1 - n2;
            printf("O resultado da subtracao entre %.2f e %.2f eh %.2f", n1, n2, resultado);
            break;
        case '*':
            resultado = n1 * n2;
            printf("O resultado da multiplicacao entre %.2f e %.2f eh %.2f", n1, n2, resultado);
            break;
        case '/':
            resultado = n1 / n2;
            printf("O resultado da divisao entre %.2f e %.2f eh %.2f", n1, n2, resultado);
            break;
        default:
            printf("opcao invalida");
    }

    return 0;
}