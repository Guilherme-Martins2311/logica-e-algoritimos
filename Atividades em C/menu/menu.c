#include <stdio.h>

int main(int argc, char* argv[]){
    int lanche, quantidade;
    float preco, valor;

    printf("Escolha seu lanche:\n");
    printf("1 - X-Burger - 12.90\n");
    printf("2 - X-Salada - 13.99\n");
    printf("3 - X-bacon - 15.00\n");
    printf("4 - X-Egg - 16.50\n");
    printf("5 - X-Frango - 17.00\n");
    printf("6 - X-Tudo - 18.50\n");
    printf("7 - X-Tudo de frango - 17.00\n");
    printf("8 - Moda da casa - 21.50\n");
    scanf("%d", &lanche);

    printf("Digite a quantidade:\n");
    scanf("%d", &quantidade);

    switch(lanche){
        case 1:
            preco = 12.90;
            valor = preco * quantidade;
            printf("Seu pedido eh:\n");
            printf("%d - X-Burger\n", quantidade);
            printf("O valor total eh: %2.f", valor);
            break;
        case 2:
            preco = 13.99;
            valor = preco * quantidade;
            printf("Seu pedido eh:\n");
            printf("%d - X-Salada\n", quantidade);
            printf("O valor total eh: %2.f", valor);
            break;
        case 3:
            preco = 15;
            valor = preco * quantidade;
            printf("Seu pedido eh:\n");
            printf("%d - X-Bacon\n", quantidade);
            printf("O valor total eh: %2.f", valor);
            break;
        case 4:
            preco = 16.50;
            valor = preco * quantidade;
            printf("Seu pedido eh:\n");
            printf("%d - X-Egg\n", quantidade);
            printf("O valor total eh: %2.f", valor);
            break;
        case 5:
            preco = 17;
            valor = preco * quantidade;
            printf("Seu pedido eh:\n");
            printf("%d - X-Frango\n", quantidade);
            printf("O valor total eh: %2.f", valor);
            break;
        case 6:
            preco = 18.50;
            valor = preco * quantidade;
            printf("Seu pedido eh:\n");
            printf("%d - X-Tudo\n", quantidade);
            printf("O valor total eh: %2.f", valor);
            break;
        case 7:
            preco = 17;
            valor = preco * quantidade;
            printf("Seu pedido eh:\n");
            printf("%d - X-Tudo de frango\n", quantidade);
            printf("O valor total eh: %2.f", valor);
            break;
        case 8:
            preco = 21.50;
            valor = preco * quantidade;
            printf("Seu pedido eh:\n");
            printf("%d - X-Moda da casa\n", quantidade);
            printf("O valor total eh: %2.f", valor);
            break;
        default:
            printf("Opcao invalida");
    }

    return 0;
}