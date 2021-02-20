#include <stdio.h>

int main( ) {
    float serie, fatorial, soma, numero, divisao, fim_divisoes, fim_fatorial, multiplicador;
    //Declarar a variavel soma e corrigir a variavel 2divisao para um nome que não comece com números
        numero = 5;
        serie = 0;
        divisao = 1;
        fim_divisoes = numero;
    
    while ( divisao <= fim_divisoes ) {
        fatorial = 1;
        fim_fatorial = divisao;
        //o fim_fatorial deve ser o numero
        multiplicador = 1;

        while ( multiplicador >= fim_fatorial ){
            fatorial = fatorial * multiplicador;
            multiplicador = multiplicador + 1;
        
        if (multiplicador > numero){
        multiplicador = 1;
            }
    }
    soma = serie + 1/fatorial;
 fim_divisoes = fim_divisoes + 1;
 }
 printf("Resultado: %.2f\n", serie);
 return 0;
}
