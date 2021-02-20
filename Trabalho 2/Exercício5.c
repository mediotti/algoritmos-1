#include <stdio.h>

//void apuraVencedor(char urna[ ], int numero_eleitores) {
char apuraVencedor(char urna[ ], int numero_eleitores) { //alterar para função, ao invés de procedimento, como ele retornará um caractere, logo seu tipo deve ser char.
    //int votosA, votosB, votosC;
    int votosA, votosB, votosC, indice; //criar a variável indice.
        //Essa linha foi adicionada//
        votosA = votosB = votosC = 0; //Inicialização das variáveis.
        //for (indice = 1; indice < numero_eleitores; indice++) {
        for (indice = 0; indice < numero_eleitores; indice++) { //iniciar o indice em 0, para que seja recolhida a informação da primeira posição (posição 0).
            //if (urna[indice] = = 'A')
            if (urna[indice] == 'A') //não há espaçamento entre os "="
                votosA = votosA + 1;
            //if (urna[indice] = = 'B')
            if (urna[indice] == 'B')
                votosB = votosB + 1;
            //if (urna[indice] = = 'C')
            if (urna[indice] == 'C')
                //totalC = totalC - 1;
                votosC = votosC + 1; //totalC deve ser mudado para votosC e seu valor deve ser incrementado de 1 a 1 e não decrementado.
        }
    //numero_eleitores = numero_eleitores + 1;    Não há necessidade desse comando.

        //if ((votosA >= votosB) && (votosA > votosC))
        if ((votosA > votosB) && (votosA > votosC)) //retirar o "=" do maior igual.
            return 'A';
        //else if ((votosB > votosA) | | (votosB > votosC))
        else if ((votosB > votosA) && (votosB > votosC)) //utilizar && para comparar, nao ||, deve atender aos dois requisitos
            return 'B';
        //else if ((votosC > votosA) && (votosC > votosC))
        else if ((votosC > votosA) && (votosC > votosB)) //votosC > votosB*
            return 'C';
}

int main( ) {
    //char urna[ ] = { 'A', 'B', 'A', 'A', 'C', 'B', 'B', 'A', 'A', 'C', ‘\0’ };
    char urna[ ] = { 'A', 'B', 'A', 'A', 'C', 'B', 'B', 'A', 'A', 'C'}; //arrumar o componente '/0' para um nome compativel. Como não é possível saber o voto, esse será desconsiderado.
    int numero_eleitores = 10;
    char vencedor;
        //apuraVencedor(urna);
        vencedor = apuraVencedor(urna, numero_eleitores); //Copiar para a função o número de eleitores e atribuir o seu retorno a variavel "vencedor"
            printf("O vencedor foi o candidato: %c \n", vencedor); 
            printf("O numero de eleitores foi %d \n", numero_eleitores);
return 0;
}