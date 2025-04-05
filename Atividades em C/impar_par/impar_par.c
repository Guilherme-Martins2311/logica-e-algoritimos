#include <stdio.h>

int main(int argc, char* argv[]){
    int numero, mod;

    printf("Digite um numero para identificar se eh impar ou par:\n");
    scanf("%d", &numero);

    mod = numero % 2;
    if(mod == 0){
        printf("O numero informado eh par\n");
    }
    else{
        printf("O numero informado eh impar\n");
    }

    return 0;
}