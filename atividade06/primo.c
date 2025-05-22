#include <stdio.h>
#include <stdbool.h>

bool eh_primo(int numero){
        if(numero <= 1){
            return false;
        }

        if(numero == 2){
            return true;
        }

        for(int i = 2; i * i <= numero; i++){
            if(numero % i == 0){
                return false;
            }
        }
        return true;
    }

int main(int agrc, char* argv[]){
    int numero;

    printf("Digite um numero para verificar se eh primo ou nao:\n");
    scanf("%d", &numero);

    if(eh_primo(numero)){
        printf("%d eh um numero primo\n", numero);
    } else {
        printf("%d nao eh um numero primo\n", numero);
    }

    return 0;
}