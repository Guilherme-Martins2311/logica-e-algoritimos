#include <stdio.h>

int main(int argc, char* argv[]){
    int opcao, opcao2, opcao3;
    int pontuacao = 0;
    int erros = 0;
    int acertos = 0;
    char resposta;

    printf("\nSeja Bem Vindo ao QuizMania\n");
    printf("1 - Iniciar Quiz\n");
    printf("2 - Sair\n");
    scanf("%d", &opcao);


    switch (opcao){
    case 1:
    //comando do\while para caso o usuário deseje trocar o tema
        do{
        printf("Escolha uma categoria para as perguntas:\n");
        printf("1 - Conhecimentos Gerais\n");
        printf("2 - Entreterimento\n");
        scanf("%d", &opcao2);

    //switch para as categorias
        switch (opcao2){
        case 1:
            printf("Pergunta\n");
            printf("Pergunta\n");
            printf("a)\n");
            printf("b)\n");
            printf("c)\n");
            printf("d)\n");
            scanf(" %c", &resposta);
            getchar();

            if(resposta == 'a'){
                printf("Voce acertou a resposta\n");
                acertos++;
                pontuacao++;
            }else{
                printf("Voce errou a resposta\n");
                erros++;
                pontuacao--;
            }

            printf("\n1 - Proxima pergunta\n");
            printf("2 - Escolher outro tema\n");
            printf("3 - Ver pontuacao\n");
            printf("4 - Sair\n");
            scanf("%d", &opcao3);

            if(opcao3 == 1){
            }

            if(opcao3 == 4){
                printf("Quiz encerrado\n");
            }
        break;

        case 2:
        break;

        default:
            printf("Opção inválida\n");
            break;
        }

        }while(opcao3 == 2);

    //if para quando o usuário escolher ver sua pontuação
        if(opcao3 == 3){
            printf("Sua pontuacao eh: %d\n", pontuacao);
            printf("Numero de acertos eh: %d\n", acertos);
            printf("Numero de erros eh: %d\n", erros);
        }

        break;

    case 2:
        printf("Quiz encerrado\n");
        break;
    
    default:
        printf("Opção inválida\n");
        break;
    }
    


    return 0;
}