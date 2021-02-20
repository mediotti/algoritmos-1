#include <stdio.h>

int func_AB (char palavra[]){ 
    int i = 0;
    int t = 0;
        do{
            t++;
        } while (palavra[t] != '\0'); //conta as letras
        
        for (i=t - 1; i>=0; i--){  //imprime a inversa da palavra
            printf("%c", palavra[i]);
        }
  return t;
}

int func_C(char palavra[]) { //contagem de vogais
    char vogais[] = "aeiouAEIOU";
    int numVogais = 0, i, j;

    for (i = 0; palavra[i] != '\0'; i++) {
        for (j = 0; vogais[j] != '\0'; j++) {
            if (vogais[j] == palavra[i]) {
                numVogais++;
                break;
            }
        }
    }
    return numVogais;
}

int func_D(char palavra[]){  //comparação com a palavra algoritmos
    char algoritmos[] = "algoritmos";
    int i = 0, verificador = 0;
        while( palavra[i] == algoritmos[i] ){
    // Verifica se alguma das strings terminou.
    // Se sim, sai do loop. Caso contrario, analisa o próximo carácter.
            if( palavra[i] == '\0' || algoritmos[i] == '\0' ){
                break;
            }
            i++;
}
// Se ambos terminaram, as strings contidas são iguais.
            if( palavra[i] == '\0' && algoritmos[i] == '\0' ){
                verificador = 1;
                printf("Sim");
            }
            else {
                verificador = 0;
                printf("Nao");            
            }      
}

int main(){
    char palavra[260];
    int tamanho, numVogais, verificador;
        printf("\nInsira uma palavra de ate 256 caracteres: ");
        scanf("%s", &palavra);
        
        printf("Sua inversa e: ");
        tamanho = func_AB(palavra);
        printf("\nSeu tamanho e: %d caracteres\n", tamanho);

        numVogais = func_C(palavra);
        printf("Essa palavra contem %d vogais.\n", numVogais);

        printf("A palavra e algoritmos?: ");
        func_D(palavra);

    return 0;
}