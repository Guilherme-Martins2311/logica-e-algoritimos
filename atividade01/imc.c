#include <stdio.h>

int main(int argc, char* argv[]){
    float altura;
    float peso;
    float imc;

    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);
    printf("Seu imc eh: %.2f\n", imc);

    if(imc <= 18.5){
        printf("baixo peso\n");
    }
    if(imc > 18.5 && imc <= 24.9){
        printf("intervalo normal\n");
    }
    if(imc > 24.9 && imc <= 29.9){
        printf("sobrepeso\n");
    }
    if(imc > 29.9 && imc <= 34.9){
        printf("obesidade 1\n");
    }
    if(imc > 34.9 && imc <= 39.9){
        printf("obesidade 2\n");
    }
    if(imc > 39.9){
        printf("obesidade 3\n");
    }
    return 0;
}