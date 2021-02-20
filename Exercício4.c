#include <stdio.h>
#include <math.h>

typedef struct {
    float x, y;
} ponto;

float distA (ponto p1, ponto p2){
    float p1_p2;
        p1_p2 = sqrt((pow(p2.x-p1.x, 2))+(pow(p2.y-p1.y, 2)));
    return p1_p2;
}

float distB (ponto p1, ponto p3){
    float p1_p3;
        p1_p3 = sqrt((pow(p3.x-p1.x, 2))+(pow(p3.y-p1.y, 2)));
    return p1_p3;
}

float distC (ponto p1, ponto p4){
    float p1_p4;
        p1_p4 = sqrt((pow(p4.x-p1.x, 2))+(pow(p4.y-p1.y, 2)));
    return p1_p4;
}

float distD (ponto p2, ponto p3){
    float p2_p3;
        p2_p3 = sqrt((pow(p3.x-p2.x, 2))+(pow(p3.y-p2.y, 2)));
    return p2_p3;
}

float distE (ponto p2, ponto p4){
    float p2_p4;
        p2_p4 = sqrt((pow(p4.x-p2.x, 2))+(pow(p4.y-p2.y, 2)));
    return p2_p4;
}

float distF (ponto p3, ponto p4){
    float p3_p4;
        p3_p4 = sqrt((pow(p4.x-p3.x, 2))+(pow(p4.y-p3.y, 2)));
    return p3_p4;
}

int main (){
    int m, n;
    float p1_p2, p1_p3, p1_p4, p2_p3, p2_p4, p3_p4;
        printf ("Insira, respectivamente, o numero de linhas e colunas de uma matriz, sendo esses maiores que 2: ");
        scanf ("%d %d", &m, &n);
            int i, j, matriz [m] [n];
            float elemento;
                 while ((m<2) || (n<2)){
                    printf("\nValores invalidos, insira novamente o numero de linhas e colunas: ");
                    scanf("%d %d", &m, &n);
                }
                
                    for (i = 0; i < m; i++){
                        for (j = 0; j < n; j++){
                            printf("\nEntre com o elemento da linha %d e coluna %d: ", i+1, j+1);
                            scanf("%f", &matriz[i][j]);
                    }
                }
    ponto p1, p2, p3, p4;
        printf("\nPara cada coordenada (x,y), x devera ser menor ou igual ao numero de linhas e y devera ser menor ou igual ao numero de colunas");
        printf("\nInsira coordenadas do primeiro ponto: ");
        scanf("%f %f", &p1.x, &p1.y);
            while ((p1.x>m) || (p1.y>n)){
                printf("\nInsira coordenadas validas para o primeiro ponto: ");
                scanf("%f %f", &p1.x, &p1.y);
            }
            
        printf("\nInsira as coordenadas do segundo ponto: ");
        scanf("%f %f", &p2.x, &p2.y);
            while ((p2.x>m) || (p2.y>n)){
                printf("\nInsira coordenadas validas para o segundo ponto: ");
                scanf("%f %f", &p2.x, &p2.y);
            }
        printf("\nInsira as coordenadas do terceiro ponto: ");
        scanf("%f %f", &p3.x, &p3.y);
            while ((p3.x>m) || (p3.y>n)){
                printf("\nInsira coordenadas validas para o terceiro ponto: ");
                scanf("%f %f", &p3.x, &p3.y);
            }
        printf("\nInsira as coordenadas do quarto ponto: ");
        scanf("%f %f", &p4.x, &p4.y);
            while ((p4.x>m) || (p4.y>n)){
                printf("\nInsira coordenadas validas para o quarto ponto: ");
                scanf("%f %f", &p4.x, &p4.y);
            }
        p1_p2 = distA(p1, p2);
        printf("\nDistancia entre o primeiro ponto e o segundo: %.2f", p1_p2);
        
        p1_p3 = distB(p1, p3);
        printf("\nDistancia entre o primeiro ponto e o terceiro: %.2f", p1_p3);
        
        p1_p4 = distC(p1, p4);
        printf("\nDistancia entre o primeiro ponto e o quarto: %.2f", p1_p4);
        
        p2_p3 = distD(p2, p3);
        printf("\nDistancia entre o segundo ponto e o terceiro: %.2f", p2_p3);
        
        p2_p4 = distE(p2, p4);
        printf("\nDistancia entre o segundo ponto e o quarto: %.2f", p2_p4);
        
        p3_p4 = distF(p3, p4);
        printf("\nDistancia entre o terceiro ponto e o quarto: %.2f\n\n", p3_p4);

            if ((p1_p2 > p1_p3) && (p1_p2 > p1_p4) && (p1_p2 > p2_p3) && (p1_p2 > p2_p4) && (p1_p2 > p3_p4)){
                printf("\nA maior distancia e entre os pontos 1 e 2: %.2f", p1_p2);
            }
            else if((p1_p3 > p1_p2) && (p1_p3 > p1_p4) && (p1_p3 > p2_p3) && (p1_p3 > p2_p4) && (p1_p3 > p3_p4)){
                printf("\nA maior distancia e entre os pontos 1 e 3: %.2f", p1_p3);
            }
            else if((p1_p4 > p1_p2) && (p1_p4 > p1_p3) && (p1_p4 > p2_p3) && (p1_p4 > p2_p4) && (p1_p4 > p3_p4)){
                printf("\nA maior distancia e entre os pontos 1 e 4: %.2f", p1_p4);
            }
            else if((p2_p3 > p1_p2) && (p2_p3 > p1_p4) && (p2_p3 > p1_p3) && (p2_p3 > p2_p4) && (p2_p3 > p3_p4)){
                printf("\nA maior distancia e entre os pontos 2 e 3: %.2f", p2_p3);
            }
            else if((p2_p4 > p1_p2) && (p2_p4 > p1_p4) && (p2_p4 > p2_p3) && (p2_p4 > p1_p3) && (p2_p4 > p3_p4)){
                printf("\nA maior distancia e entre os pontos 2 e 4: %.2f", p2_p4);
            }
            else if((p3_p4 > p1_p2) && (p3_p4 > p1_p4) && (p3_p4 > p2_p3) && (p3_p4 > p2_p4) && (p3_p4 > p1_p3)){
                printf("\nA maior distancia e entre os pontos 3 e 4: %.2f", p3_p4);
            }
    system("pause");
return 0;
}