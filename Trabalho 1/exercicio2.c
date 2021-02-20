/*2 – Escreva um algoritmo em linguagem de programação C em que as entradas são dois números (x e
y), que devem compor um intervalo de números inteiros. O objetivo do algoritmo é determinar no
intervalo a quantidade de números pares, a quantidade de números ímpares, a quantidade de números
nulos (iguais a zero), a quantidade de números positivos, a quantidade de números negativos, a
quantidade de números múltiplos de 5. Por exemplo, se x é o número 5 e y o número 10, o intervalo é
5, 6, 7, 8, 9, 10, a quantidade de números pares é 3, a quantidade de números ímpares é 3, a quantidade
de números nulos é 0, a quantidade de números positivos é 6, a quantidade de números negativos é 0, a
quantidade de múltiplos de cinco é 2. Não permitir que x seja maior do que y, podendo inverter os
valores se isso acontecer. Considere que os números digitados sempre serão inteiros.*/

#include <stdio.h>
#include <math.h>

int main (){
    int x, y, z, n, repeticao, par, impar, nulos, positivos, negativos, multiplos; 
    x=y=z=n=par=impar=nulos=positivos=negativos=multiplos=0;
        printf("\nInsira o primeiro numero: ");
        scanf("%i", &x);
        printf("\nInsira o segundo numero: ");
        scanf("%i", &y);
        
        if (x>y){
            z = x;
            x = y;
            y = z;
        }
        n=x;
            while (n <= y){
                
                if (n == 0){
                    nulos = nulos+1;
                }
                
                if (n> 0){
                    positivos = positivos+1;
                }
                
                if (n< 0){
                    negativos = negativos+1;
                }   

                if (n%5==0){
                    multiplos = multiplos+1;
                }
                
                if (n%2==0){
                    par = par+1;
                }
                if (n%2!=0){
                    impar = impar+1;
                }
                n = n+1;  
        }
        printf("\nNumeros Positivos: %d", positivos);
        printf("\nNumeros Negativos: %d", negativos);
        printf("\nNumeros Nulos: %d", nulos);
        printf("\nNumeros Multiplos de 5: %d", multiplos);
        printf("\nNumeros Pares: %d", par);
        printf("\nNumeros Impares: %d", impar);
    return 0;
}