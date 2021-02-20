#include <stdio.h>
#include <math.h>
#include <stdint.h>

int main (){
    float area_terreno, area_construida, valor_terreno, valor_construida, valor_venal, iptu, valor_parcela;
    int parcelas, tipo;
        printf("Insira a area total do terreno e a area construida(respectivamente): ");
        scanf("%f %f", &area_terreno, &area_construida);
        printf("Informe o tipo de imovel: ");
        
        printf("\n[1] Precario");
        printf("\n[2] Medio");
        printf("\n[3] Bom");
        printf("\n[4] Luxo\n");
        scanf("%i", &tipo);
        if ((tipo<1) || (tipo>4)){
        }
        valor_terreno = area_terreno*320.40;
        
        if (tipo == 1)
        {
        valor_construida = area_construida*100.15;
        }
        
        if (tipo == 2)
        {
        valor_construida = area_construida*300.50;
        }

        if (tipo == 3)
        {
        valor_construida = area_construida*603.72;
        }
        
        if (tipo == 4)
        {
        valor_construida = area_construida*1001.05;
        }
        
        valor_venal = valor_construida + valor_terreno;
        iptu = valor_venal*0.01;
    
    printf("IPTU: %.2f.", iptu);

    printf("\n\nO IPTU sera pago em quantas parcelas (1-8)? ");
    scanf("%i", &parcelas);
  if((parcelas>=1) && (parcelas<=8)){
    valor_parcela = iptu/parcelas;
    printf("O valor de cada parcela sera: %.2f", valor_parcela);
    return 0;
    }
return 0;

}