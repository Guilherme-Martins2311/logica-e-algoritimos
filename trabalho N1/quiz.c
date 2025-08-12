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

    //switch para caso o usuário escolha iniciar o quiz ou sair
    switch (opcao){
    case 1:
        //comando do\while para caso o usuário deseje trocar o tema
        do{
        printf("Escolha uma categoria para as perguntas:\n");
        printf("1 - Conhecimentos Gerais\n");
        printf("2 - Entretenimento\n");
        scanf("%d", &opcao2);


        //switch para as categorias
        switch (opcao2){
        case 1:
            //do while para o usuário ter a opção de confirmar sua resposta
            do {
                printf("Pergunta 01\n");
                printf("Qual o menor e o maior pais do mundo?\n");
                printf("a) Vaticano e Russia\n");
                printf("b) Nauru e China\n");
                printf("c) Monaco e Canada\n");
                printf("d) Malta e Estados Unidos\n");

                printf("Digite sua resposta (a, b, c ou d):\n");
                scanf(" %c", &resposta);
                getchar();

                printf("Comfirmar Resposta?\n");
                printf("1 - Sim\n");
                printf("2 - Nao\n");
                scanf(" %d", &opcao3);
                getchar();

            } while(opcao3 == 2);

            //if para verificar se a resposta está correta
            if(resposta == 'a'){
                printf("Voce acertou a resposta\n");
                acertos++;
                pontuacao++;
                pontuacao++;
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
            
            //if para caso o usuário deseje ir para a proxima pergunta
            if(opcao3 == 1){
                do {
                    printf("Pergunta 02\n");
                    printf("Quantas casas decimais tem o numero pi?\n");
                    printf("a) Duas\n");
                    printf("b) Centenas\n");
                    printf("c) Infinitas\n");
                    printf("d) Milhares\n");

                    printf("Digite sua resposta (a, b, c ou d):\n");
                    scanf(" %c", &resposta);
                    getchar();

                    printf("Comfirmar Resposta?\n");
                    printf("1 - Sim\n");
                    printf("2 - Nao\n");
                    scanf(" %d", &opcao3);
                    getchar();

                } while(opcao3 == 2);

                if(resposta == 'c'){
                printf("Voce acertou a resposta\n");
                acertos++;
                pontuacao++;
                pontuacao++;
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
                    do {
                        printf("Pergunta 03\n");
                        printf("Quanto tempo a luz do Sol demora para chegar a Terra?\n");
                        printf("a) 12 minutos\n");
                        printf("b) 1 dia\n");
                        printf("c) 12 horas\n");
                        printf("d) 8 minutos\n");

                        printf("Digite sua resposta (a, b, c ou d):\n");
                        scanf(" %c", &resposta);
                        getchar();
        
                        printf("Comfirmar Resposta?\n");
                        printf("1 - Sim\n");
                        printf("2 - Nao\n");
                        scanf(" %d", &opcao3);
                        getchar();
        
                    } while(opcao3 == 2);

                    if(resposta == 'd'){
                        printf("Voce acertou a resposta\n");
                        acertos++;
                        pontuacao++;
                        pontuacao++;
                        pontuacao++;
                    }else{
                        printf("Voce errou a resposta\n");
                        erros++;
                        pontuacao--;
                    }

                    printf("\nVoce concluiu as perguntas de conhecimentos gerais!\n");
                    printf("2 - Escolher outro tema\n");
                    printf("3 - Ver pontuacao\n");
                    printf("4 - Sair\n");
                    scanf("%d", &opcao3);
                }
                }

            //caso o usuario deseje sair do quiz        
            if(opcao3 == 4){
                printf("Quiz encerrado\n");
            }
        break;



        case 2:
            do{
                printf("Pergunta 01\n");
                printf("Qual o verdadeiro nome do Capitao America? \n");
                printf("a) Tony Stark\n");
                printf("b) Steve Rogers\n");
                printf("c) Bucky Barner\n");
                printf("d) Bruce Banner\n");

                printf("Digite sua resposta (a, b, c ou d):\n");
                scanf(" %c", &resposta);
                getchar();

                printf("Comfirmar Resposta?\n");
                printf("1 - Sim\n");
                printf("2 - Nao\n");
                scanf(" %d", &opcao3);
                getchar();

            } while(opcao3 == 2);

            if(resposta == 'b'){
                printf("Voce acertou a resposta\n");
                acertos++;
                pontuacao++;
                pontuacao++;
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
                do{
                    printf("Pergunta 02\n");
                    printf("Qual desses personagens de filmes de terror tem a capacidade de invadir o sonho das pessoas?\n");
                    printf("a) it\n");
                    printf("b) jason\n");
                    printf("c) Freddy Krueger\n");
                    printf("d) Hannibal Lecter\n");

                    printf("Digite sua resposta (a, b, c ou d):\n");
                    scanf(" %c", &resposta);
                    getchar();
    
                    printf("Comfirmar Resposta?\n");
                    printf("1 - Sim\n");
                    printf("2 - Nao\n");
                    scanf(" %d", &opcao3);
                    getchar();
    
                } while(opcao3 == 2);

                if(resposta == 'c'){
                printf("Voce acertou a resposta\n");
                acertos++;
                pontuacao++;
                pontuacao++;
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
            }

                if(opcao3 == 1){
                    do{
                        printf("Pergunta 03\n");
                        printf("Qual a musica mais famosa do Michael Jackson\n");
                        printf("a) Beat it\n");
                        printf("b) Billie Jean\n");
                        printf("c) Thriller\n");
                        printf("d) Bad\n");

                        printf("Digite sua resposta (a, b, c ou d):\n");
                        scanf(" %c", &resposta);
                        getchar();
        
                        printf("Comfirmar Resposta?\n");
                        printf("1 - Sim\n");
                        printf("2 - Nao\n");
                        scanf(" %d", &opcao3);
                        getchar();
        
                    } while(opcao3 == 2);

                    if(resposta == 'b'){
                        printf("Voce acertou a resposta\n");
                        acertos++;
                        pontuacao++;
                        pontuacao++;
                        pontuacao++;
                    }else{
                        printf("Voce errou a resposta\n");
                        erros++;
                        pontuacao--;
                    }

                    printf("\nVoce concluiu as perguntas de entretenimento!\n");
                    printf("2 - Escolher outro tema\n");
                    printf("3 - Ver pontuacao\n");
                    printf("4 - Sair\n");
                    scanf("%d", &opcao3);
                }
                //caso o usuario deseje sair do quiz
                if(opcao3 == 4){
                    printf("Quiz encerrado\n");
                }
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

        //caso o usuario deseje sair do quiz
    case 2:
        printf("Quiz encerrado\n");
        break;
    
    default:
        printf("Opção inválida\n");
        break;
    }
    
    return 0;
}