#include <stdio.h>
#include <stdlib.h>

void funcTabuleiro (char casas [3] [3]){
    system("cls");
    printf("JOGO DA VELHA");
    printf("\n\n1   2   3  (Colunas)");
    printf("\n\n%c | %c | %c    Linha 1", casas[0][0], casas[0][1], casas[0][2]);
    printf("\n----------");
    printf("\n%c | %c | %c    Linha 2", casas[1][0], casas[1][1], casas[1][2]);
    printf("\n----------");
    printf("\n%c | %c | %c    Linha 3\n", casas[2][0], casas[2][1], casas[2][2]);
}

int main (){
    char casas [3] [3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

        char res;
        int cont_jogadas, linha, coluna, vez = 0, i, j;
        do{
            cont_jogadas = 1;
            for (i = 0; i <= 2; i++){
                for (j = 0; j <= 2; j++){
                    casas [i][j] = ' ';
                }
            }
            do{
                funcTabuleiro(casas);
                if (vez%2==0){
                    printf("\nJogador X");
                }else{
                    printf("\nJogador O");
                }
                
                printf("\nDigite o numero da linha da sua jogada: ");
                scanf("%d", &linha);

                printf("\nDigite o numero da coluna da sua jogada: ");
                scanf("%d", &coluna);
                    
                    if ((linha<1) || (coluna<1) || (linha>3) || (coluna>3)){
                        do{
                            printf("\nDigite valores corretos para a jogada.");
                            
                            printf("\nDigite o numero da linha da sua jogada: ");
                            scanf("%d", &linha);\
                            
                            printf("\nDigite o numero da coluna da sua jogada: ");
                            scanf("%d", &coluna);

                        } while ((linha<1) || (coluna<1) || (linha>3) || (coluna>3));
                        
                    }else {
                        if (vez %2 == 0) {
                            casas[linha-1][coluna-1] = 'X';
                        }else {
                            casas[linha-1][coluna-1] = 'O';
                        }
                    vez ++;
                    cont_jogadas++;

                    }
                if (casas[0][0]=='X' && casas[0][1]=='X' && casas[0][2]=='X'){cont_jogadas = 15;}
                if (casas[1][0]=='X' && casas[1][1]=='X' && casas[1][2]=='X'){cont_jogadas = 15;}
                if (casas[2][0]=='X' && casas[2][1]=='X' && casas[2][2]=='X'){cont_jogadas = 15;}
                if (casas[0][0]=='X' && casas[1][0]=='X' && casas[2][0]=='X'){cont_jogadas = 15;}
                if (casas[0][1]=='X' && casas[1][1]=='X' && casas[2][1]=='X'){cont_jogadas = 15;}
                if (casas[0][0]=='X' && casas[1][1]=='X' && casas[2][2]=='X'){cont_jogadas = 15;}
                if (casas[0][2]=='X' && casas[1][1]=='X' && casas[2][0]=='X'){cont_jogadas = 15;}

                if (casas[0][0]=='O' && casas[0][1]=='O' && casas[0][2]=='O'){cont_jogadas = 16;}
                if (casas[1][0]=='O' && casas[1][1]=='O' && casas[1][2]=='O'){cont_jogadas = 16;}
                if (casas[2][0]=='O' && casas[2][1]=='O' && casas[2][2]=='O'){cont_jogadas = 16;}
                if (casas[0][0]=='O' && casas[1][0]=='O' && casas[2][0]=='O'){cont_jogadas = 16;}
                if (casas[0][1]=='O' && casas[1][1]=='O' && casas[2][1]=='O'){cont_jogadas = 16;}
                if (casas[0][0]=='O' && casas[1][1]=='O' && casas[2][2]=='O'){cont_jogadas = 16;}
                if (casas[0][2]=='O' && casas[1][1]=='O' && casas[2][0]=='O'){cont_jogadas = 16;}


                
            } while (cont_jogadas<=9);
            funcTabuleiro(casas);
                if (cont_jogadas == 10){
                    printf("\nDeu velha!");
                }if (cont_jogadas == 15){
                    printf("\nO jogador X foi o vencedor!");
                }if (cont_jogadas == 16){
                    printf("\nO jogador O foi o vencedor!");
                }
                
                
                
            printf("\n\nVoce deseja continuar jogando(S/N)? : ");
            scanf("%s", &res);

        } while ((res == 's') || (res == 'S'));
         
return 0;
}
