/*1 – Um professor necessita de um algoritmo computacional para calcular as médias finais de uma
turma de alunos para inserção no sistema acadêmico. O algoritmo deve ser escrito na linguagem de
programação C. O professor deve realizar diversos cálculos e determinar a cada resultado de média se
continua (opção C) ou finaliza o cálculo (opção F). Cada cálculo considera duas provas e um trabalho,
e cada prova possui peso 4,5 na média final e o trabalho peso 1. Se a média final for menor do que 6, a
nota de uma prova substitutiva deve ser lançada para recálculo da média final, sendo que esta última
prova deve substituir a menor nota entre as duas primeiras provas. Considere que as notas serão
sempre digitadas entre o intervalo de 0 e 10.*/
#include <stdio.h>
#include <math.h>

int main () {
    float p1, p2, trab, sub, media, opcao;
        opcao = 1;
        while (opcao == 1) {
            p1 = p2 = trab = sub = media = opcao = 0;
            printf("Inserir nota da primeira prova: ");
            scanf("%f", &p1);

            printf("Inserir nota da segunda prova: ");
            scanf("%f", &p2);

            printf("Inserir nota do trabalho: ");
            scanf("%f", &trab);

            media = (((p1*4.5)+(p2*4.5)+(trab))/10);
            
            if (media< 6) {
                printf("Inserir nota da prova substitutiva: ");
                scanf("%f", &sub);
                    if ((sub>= p1) || (sub< p2)){
                        p1 = sub;
                        media = (((p1*4.5)+(p2*4.5)+(trab))/10);
                        }
                        
                    if ((sub< p1) || (sub>=p2)) {
                        p2 = sub;
                        media = (((p1*4.5)+(p2*4.5)+(trab))/10);
                        }
                    
                    if ((sub = p1) || (sub = p2)){
                        p1 = sub;
                        media = (((p1*4.5)+(p2*4.5)+(trab))/10);
                        }
                    }
                    
                printf("Media: %.2f", media);
            printf("\n[1] Continuar a calcular as medias");
            printf("\n[2] Finalizar o programa\n");
            scanf("%f", &opcao);
        } 
        printf("Fim do programa"); 
return 0;
}