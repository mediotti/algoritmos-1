#include <stdio.h>

int main(){
    int numero;
        printf("Insira um numero inteiro positivo que e um quadrado perfeito: ");
        scanf("%d", &numero);
            int i, j;
            j = 0;
                for ( i = 1; i <= numero; i++){
                    numero = numero - i;
                    i++; //acrescentado para incrementar i de 2 em 2, para que continue um numero impar
                    j++; //contagem de subtrações, no final do algoritmo, se o numero for um quadrado perfeito, essa sera sua raiz
                }
        printf("%d", j);
    return 0;

}