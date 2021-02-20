#include <stdio.h>
#include <math.h>

int main (){
    int i, n, m, fib1, fib2, elementos;
    long int soma;
    fib1 = 0;
    fib2 = 1;
        printf("Insira a quantidade de elementos da sequencia: ");
        scanf("%d", &elementos);
       
        printf("Sequencia de Fibonacci de %d elementos:\n", elementos);
        printf("%d\n", fib2);       
            
            for (i = 0; i < elementos; i++) {
                soma = fib1+fib2;
                fib1 = fib2;
                fib2 = soma;
                printf("%li\n", soma);
            }
            
            if (elementos >= 221) {
                
                while (m < 221) {
                    n = 0;
                    m=43;
                    m=m+1;
                    n=n+1;                      
                }
                
                printf("O numero de elementos entre 43 e 221 e: %d", n);
            
            }
            
            
            
            if (soma>100) {
                    printf("A soma dos elementos da serie e maior que 100.");
                }
    return 0;
}