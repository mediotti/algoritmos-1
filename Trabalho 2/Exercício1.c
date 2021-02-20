#include <stdio.h>

void conversao (int numero1, int aux){
    int bin[20];
        for (aux = 20; aux >= 0; aux--) { //ja salva o binario inversamente
            if (numero1 % 2 == 0) { //se a divisao der resto 1, executa o bloco else
                bin[aux] = 0;  //o aux indica qual é o indice da array do binario, naquela posição quem 
                numero1 = numero1 / 2; //divide por 2 e salva o resultado
            }
            else {
                bin[aux] = 1; //se executar esse bloco, o indice respectivo recebe 1, e se efetua a divisao
                numero1 = numero1 / 2;
            }
        }

        for (aux = 0; aux <= 20; aux++) {
            printf("%d", bin[aux]); //exibição do binario
        }
}


int main (){
    int numero;
        printf("Insira um numero a ser convertido para a base 2 (binario): ");
        scanf("%d", &numero);
            conversao(numero, 0);
    return 0;    
}