#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    char j1;
    char j2;
    int inicio;
    char resposta = 'S';
    int comecou = 0; 
    int trocadilho = 0;
    int prox = 0;
    int comecando = 0;
   while(resposta == 'S' || comecou == 0){
    comecou = 1;
    int jogo1 = 0;
    printf("\n Jogo da Velha");
    printf("\nJogador 1: deseja ser X ou O? ");
    do
    {
        scanf("%s", &j1);
        j1 = toupper(j1);
        if (j1 == 'O')
        {
            j1 = 'X';
            trocadilho = 1;
        }
        if (j1 != 'X')
        {
            printf("\nSao aceitos apenas os personagens (X) ou (O)\n");
        }
    } while (j1 != 'X');

    if (trocadilho == 1)
    {
        j1 = 'O';
        trocadilho = 0;
    }

    if (j1 == 'O')
    {
        printf("\nJogador 2: sera X, pois o 1 escolheu O\n");
        j2 = 'X';
    }
    else if (j1 == 'X')
    {
        printf("\nJogador 2: sera O, pois o 1 escolheu X\n");
        j2 = 'O';
    }
    if(comecando == 0){
    int i, numPontos;
    int direcao = 1;
    int rever = 0;
    for(i = 0; i < 4; i++){
        printf("Jogo em andamento");
         for(numPontos = 0; numPontos <= i; numPontos++){
            printf(".");
            if(i == 3 && rever == 0){
                numPontos = 0;
                i = -1;
                rever = 1;
                system("cls");
                printf("\nJogo da Velha\n");
                printf("\npaciencia\n");
                printf("\nJogo em andamento");
            }
         }
        fflush(stdout); 
        sleep(1); 
        printf("\r");
    }
    comecando = 1;
    }
    int ganhou = 0;
    int contadorVelha = 0;
    int velha = 0;
    int contJog = 0;
    int array[9];
    array[1] = '1';
    array[2] = '2';
    array[3] = '3';
    array[4] = '4';
    array[5] = '5';
    array[6] = '6';
    array[7] = '7';
    array[8] = '8';
    array[9] = '9';
    system("cls");
    while (ganhou != 1)
    {
        int jg1, jg2, guardar;
        int value;
        int verif1;
        int trocadilho = 0;
        if (jogo1 == 0)
        {
            if (array[1] == j1 && array[2] == j1 && array[3] == j1 || array[4] == j1 && array[5] == j1 && array[6] == j1 || array[1] == j1 && array[4] == j1 && array[7] == j1 || array[7] == j1 && array[8] == j1 && array[9] == j1 || array[2] == j1 && array[5] == j1 && array[8] == j1 || array[3] == j1 && array[6] == j1 && array[9] == j1 || array[1] == j1 && array[5] == j1 && array[9] == j1 || array[7] == j1 && array[5] == j1 && array[3] == j1 || array[1] == j2 && array[2] == j2 && array[3] == j2 || array[1] == j2 && array[4] == j2 && array[7] == j2 || array[4] == j2 && array[5] == j2 && array[6] == j2 || array[7] == j2 && array[8] == j2 && array[9] == j2 || array[2] == j2 && array[5] == j2 && array[8] == j2 || array[3] == j2 && array[6] == j2 && array[9] == j2 || array[1] == j2 && array[5] == j2 && array[9] == j2 || array[7] == j2 && array[5] == j2 && array[3] == j2)
            {
                ganhou = 1;
            }else{
            if(ganhou != 1 && contJog >= 9){
                velha = 1;
                ganhou = 1;
            }else{
            printf("\nJogador 1 aonde deseja colocar o %c\n", j1, "?");
           printf("\n                            |                            |                              \n");
            printf("            %s               |             %s              |             %s              \n", &array[1], &array[2], &array[3]);
            printf("                            |                            |                              \n");
            printf("----------------------------|----------------------------|-----------------------------\n");
            printf("                            |                            |                              \n");
            printf("            %s               |             %s              |             %s              \n", &array[4], &array[5], &array[6]);
            printf("                            |                            |                              \n");
            printf("----------------------------|----------------------------|-----------------------------\n");
            printf("                            |                            |                              \n");
            printf("            %s               |             %s              |             %s              \n", &array[7], &array[8], &array[9]);
            printf("                            |                            |                              \n");
            do
            {
                trocadilho = 0;
                scanf("%d", &jg1);
                getchar();
                if (jg1 >= 1 && jg1 <= 9)
                {
                    trocadilho = 1;
                }
                if (trocadilho == 0)
                {
                    printf("valor invalido, digite um numero de 1 a 9\n");
                }
                system("cls");
                prox = 0;
                if (jg1 == 1 && array[1] == 'X' || jg1 == 2 && array[2] == 'X' || jg1 == 3 && array[3] == 'X' || jg1 == 4 && array[4] == 'X' || jg1 == 5 && array[5] == 'X' || jg1 == 6 && array[6] == 'X' || jg1 == 7 && array[7] == 'X' || jg1 == 8 && array[8] == 'X' || jg1 == 9 && array[9] == 'X')
                {
                    printf("\nPosicao ja escolhida\n");
                }
                if (jg1 == 1 && array[1] == 'O' || jg1 == 2 && array[2] == 'O' || jg1 == 3 && array[3] == 'O' || jg1 == 4 && array[4] == 'O' || jg1 == 5 && array[5] == 'O' || jg1 == 6 && array[6] == 'O' || jg1 == 7 && array[7] == 'O' || jg1 == 8 && array[8] == 'O' || jg1 == 9 && array[9] == 'O')
                {
                    printf("\nPosicao ja escolhida\n");
                }
                if(isalpha(jg1)){
                     printf("\ncaracter inválido\n");
                }
                if (array[1] != 'X' && array[1] != 'O')
                {
                    if (jg1 == 1)
                    {
                        array[1] = j1;
                        prox = 1;
                        contJog++;
                    }
                }
                if (array[2] != 'X' && array[2] != 'O')
                {
                    if (jg1 == 2)
                    {
                        array[2] = j1;
                        prox = 1;
                        contJog++;
                    }
                }
                if (array[3] != 'X' && array[3] != 'O')
                {
                    if (jg1 == 3)
                    {
                        array[3] = j1;
                        prox = 1;
                        contJog++;
                    }
                }
                if (array[4] != 'X' && array[4] != 'O')
                {
                    if (jg1 == 4)
                    {
                        array[4] = j1;
                        prox = 1;
                        contJog++;
                    }
                }
                if (array[5] != 'X' && array[5] != 'O')
                {
                    if (jg1 == 5)
                    {
                        array[5] = j1;
                        prox = 1;
                        contJog++;
                    }
                }
                if (array[6] != 'X' && array[6] != 'O')
                {
                    if (jg1 == 6)
                    {
                        array[6] = j1;
                        prox = 1;
                        contJog++;
                    }
                }
                if (array[7] != 'X' && array[7] != 'O')
                {
                    if (jg1 == 7)
                    {
                        array[7] = j1;
                        prox = 1;
                        contJog++;
                    }
                }
                if (array[8] != 'X' && array[8] != 'O')
                {
                    if (jg1 == 8)
                    {
                        array[8] = j1;
                        prox = 1;
                        contJog++;
                    }
                }
                if (array[9] != 'X' && array[9] != 'O')
                {
                    if (jg1 == 9)
                    {
                        array[9] = j1;
                        prox = 1;
                        contJog++;
                    }
                }
            } while (trocadilho == 0);
            verif1 = guardar;
            }
            if (prox == 1)
        {
            jogo1 = 1;
        }
        }
        }
        if (jogo1 == 1)
        {
            if (array[1] == j1 && array[2] == j1 && array[3] == j1 || array[4] == j1 && array[5] == j1 && array[6] == j1 || array[1] == j1 && array[4] == j1 && array[7] == j1 || array[7] == j1 && array[8] == j1 && array[9] == j1 || array[2] == j1 && array[5] == j1 && array[8] == j1 || array[3] == j1 && array[6] == j1 && array[9] == j1 || array[1] == j1 && array[5] == j1 && array[9] == j1 || array[7] == j1 && array[5] == j1 && array[3] == j1 || array[1] == j2 && array[2] == j2 && array[3] == j2 || array[1] == j2 && array[4] == j2 && array[7] == j2 || array[4] == j2 && array[5] == j2 && array[6] == j2 || array[7] == j2 && array[8] == j2 && array[9] == j2 || array[2] == j2 && array[5] == j2 && array[8] == j2 || array[3] == j2 && array[6] == j2 && array[9] == j2 || array[1] == j2 && array[5] == j2 && array[9] == j2 || array[7] == j2 && array[5] == j2 && array[3] == j2)
            {
                ganhou = 1;
            }else{
                if(ganhou != 1 && contJog >= 9){
                    velha = 1;
                    ganhou = 1;
                }else{
            printf("\nJogador 2 aonde deseja colocar o %c\n", j2, "?");
            printf("\n                            |                            |                              \n");
            printf("            %s               |             %s              |             %s              \n", &array[1], &array[2], &array[3]);
            printf("                            |                            |                              \n");
            printf("----------------------------|----------------------------|-----------------------------\n");
            printf("                            |                            |                              \n");
            printf("            %s               |             %s              |             %s              \n", &array[4], &array[5], &array[6]);
            printf("                            |                            |                              \n");
            printf("----------------------------|----------------------------|-----------------------------\n");
            printf("                            |                            |                              \n");
            printf("            %s               |             %s              |             %s              \n", &array[7], &array[8], &array[9]);
            printf("                            |                            |                              \n"); 
            do
            {
                trocadilho = 0;
                scanf("%d", &jg2);               
                getchar();
                if (jg2 >= 1 && jg2 <= 9)
                {
                    trocadilho = 1;
                }
                if (trocadilho == 0)
                {
                    printf("valor invalido, digite um numero de 1 a 9\n");
                }
                system("cls");
                prox = 0;
                if (jg2 == 1 && array[1] == 'X' || jg2 == 2 && array[2] == 'X' || jg2 == 3 && array[3] == 'X' || jg2 == 4 && array[4] == 'X' || jg2 == 5 && array[5] == 'X' || jg2 == 6 && array[6] == 'X' || jg2 == 7 && array[7] == 'X' || jg2 == 8 && array[8] == 'X' || jg2 == 9 && array[9] == 'X')
                {
                    printf("\nPosicao ja escolhida\n");
                }
                if (jg2 == 1 && array[1] == 'O' || jg2 == 2 && array[2] == 'O' || jg2 == 3 && array[3] == 'O' || jg2 == 4 && array[4] == 'O' || jg2 == 5 && array[5] == 'O' || jg2 == 6 && array[6] == 'O' || jg2 == 7 && array[7] == 'O' || jg2 == 8 && array[8] == 'O' || jg2 == 9 && array[9] == 'O')
                {
                    printf("\nPosicao ja escolhida\n");
                }
                if(isalpha(jg2)){
                     printf("\ncaracter inválido\n");
                }
                if (array[1] != 'X' && array[1] != 'O')
                {
                    if (jg2 == 1)
                    {
                        array[1] = j2;
                        prox = 1;
                        contJog++;
                    }
                }
                if (array[2] != 'X' && array[2] != 'O')
                {
                    if (jg2 == 2)
                    {
                        array[2] = j2;
                        prox = 1;
                        contJog++;
                    }
                }
                if (array[3] != 'X' && array[3] != 'O')
                {
                    if (jg2 == 3)
                    {
                        array[3] = j2;
                        prox = 1;
                        contJog++;
                    }
                }
                if (array[4] != 'X' && array[4] != 'O')
                {
                    if (jg2 == 4)
                    {
                        array[4] = j2;
                        prox = 1;
                        contJog++;
                    }
                }
                if (array[5] != 'X' && array[5] != 'O')
                {
                    if (jg2 == 5)
                    {
                        array[5] = j2;
                        prox = 1;
                        contJog++;
                    }
                }
                if (array[6] != 'X' && array[6] != 'O')
                {
                    if (jg2 == 6)
                    {
                        array[6] = j2;
                        prox = 1;
                        contJog++;
                    }
                }
                if (array[7] != 'X' && array[7] != 'O')
                {
                    if (jg2 == 7)
                    {
                        array[7] = j2;
                        prox = 1;
                        contJog++;
                    }
                }
                if (array[8] != 'X' && array[8] != 'O')
                {
                    if (jg2 == 8)
                    {
                        array[8] = j2;
                        prox = 1;
                        contJog++;
                    }
                }
                if (array[9] != 'X' && array[9] != 'O')
                {
                    if (jg2 == 9)
                    {
                        array[9] = j2;
                        prox = 1;
                        contJog++;
                    }
                }
            } while (trocadilho == 0);
            verif1 = guardar;
        }
        if (prox == 1)
        {
            jogo1 = 0;
        }
     }
    }
    }
    if(velha == 1){
      printf("\nDeu Velha!\n");
       printf("\nDeseja continuar o jogo?. [N/S]\n");
        char trocadilho03;
        do{
        scanf("%s", &resposta);
        getchar();
        resposta = toupper(resposta);
        if(resposta == 'NAO'){
            resposta = 'N';
        }
        if(resposta == 'S' || resposta == 'SIM'){
            trocadilho03 = resposta;
            resposta = 'N';
        }
        if(resposta != 'N'){
            printf("\nRespota invalida. digite [S] para continuar ou [N] para parar o jogo!...\n");
        }
        }while(resposta != 'N');
        resposta = trocadilho03;
    }else{
        if(array[1] == j1 && array[2] == j1 && array[3] == j1 || array[4] == j1 && array[5] == j1 && array[6] == j1 || array[1] == j1 && array[4] == j1 && array[7] == j1 || array[7] == j1 && array[8] == j1 && array[9] == j1 || array[2] == j1 && array[5] == j1 && array[8] == j1 || array[3] == j1 && array[6] == j1 && array[9] == j1 || array[1] == j1 && array[5] == j1 && array[9] == j1 || array[7] == j1 && array[5] == j1 && array[3] == j1){
                  printf("Jogador 1 Ganhou com [%c] Parabens!!! :)", j1);
        }
        if(array[1] == j2 && array[2] == j2 && array[3] == j2 || array[1] == j2 && array[4] == j2 && array[7] == j2 || array[4] == j2 && array[5] == j2 && array[6] == j2 || array[7] == j2 && array[8] == j2 && array[9] == j2 || array[2] == j2 && array[5] == j2 && array[8] == j2 || array[3] == j2 && array[6] == j2 && array[9] == j2 || array[1] == j2 && array[5] == j2 && array[9] == j2 || array[7] == j2 && array[5] == j2 && array[3] == j2){
                  printf("Jogador 2 Ganhou com [%c] Parabens!!! :)", j2);
        }
        printf("\nDeseja continuar o jogo?. [N/S]\n");
        char trocadilho03 = 'null';
        do{
        scanf("%s", &resposta);
        getchar();
        resposta = toupper(resposta);
        if(resposta == 'NAO' || resposta == 'NÃO'){
            resposta = 'N';
        }
        if(resposta == 'S' || resposta == 'SIM'){
            trocadilho03 = resposta;
            resposta = 'N';
        }
        if(resposta != 'N'){
            printf("\nRespota invalida. digite [S] para continuar ou [N] para parar o jogo!...\n");
        }
        }while(resposta != 'N');
           resposta = trocadilho03;
            inicio = 1;
    }
   }
   system("cls");
   printf("Agradeco por jogar! :)");
   printf("\nDesenvolvido por @TelmoPersch\n");
    return 0;
}