#include <stdio.h>
#include <math.h>

int main () {
    float salario, dependentes, ir, salario_final;
    printf("\nInsira o seu salario: ");
    scanf("%f", &salario);
    printf("\nInsira o numero de dependentes: ");
    scanf("%f", &dependentes);

    if (salario<1903.38){
        printf("Nao ha necessidade de declarar o imposto de renda");
        printf("\nO salario final sera: %.2f", salario);
    }

    if ((salario>=1903.38) && (salario<=2826.65)){
        ir = (salario-(dependentes*142.80))*0.075;
        salario_final = salario - ir;
        printf("\nO salario final sera: %.2f", salario_final);
    }
   
    if ((salario>=2826.66) && (salario<=3751.05)){
        ir = (salario-(dependentes*354.80))*0.15;
        salario_final = salario - ir;
        printf("\nO salario final sera: %.2f", salario_final);
    }
   
   if ((salario>=3751.06) && (salario<=4664.68)){
        ir = (salario-(dependentes*636.13))*0.225;
        salario_final = salario - ir;
        printf("\nO salario final sera: %.2f", salario_final);
    }
   
   if (salario>4664.68){
        ir = (salario-(dependentes*869.39))*0.275;
        salario_final = salario - ir;
        printf("\nO salario final sera: %.2f", salario_final);
    }
   
   return 0;
}