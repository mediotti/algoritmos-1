/*3 - Escreva um algoritmo em linguagem de programação C para cadastrar até 40 alunos de
uma turma usando struct. As informações necessárias são: número do Registro do Aluno,
nome do aluno, nome da disciplina, nota da Prova 1, nota da Prova 2, data de ingresso no curso, sendo que data deve ser formada por dia, mês e ano. O algoritmo deve calcular e exibir a
média final de cada aluno, informando se foi Aprovado ou Não Aprovado. Para ser aprovado, a média final deve ser maior ou igual a 6,0, lembrando que as notas das provas e a média
são valores de 0 a 10, e cada prova possui o mesmo peso na média final. */


#include <stdio.h>

    typedef struct{
        int ra;
        float p1, p2, media;
        char nome [200], disciplina [200], ingresso[8];
    } registro;

    int main (){
        int na;
        registro aluno[40];
            for (na = 0; na < 40; na++){
                printf("\nInsira o nome do aluno: ");
                scanf("%s", &aluno[na].nome);

                printf("\nInsira o numero de registro do aluno (RA): ");
                scanf("%d", &aluno[na].ra);

                printf("\nInsira o nome da disciplina: ");
                scanf("%s", &aluno[na].disciplina);

                printf("\nInsira a data de ingresso do aluno, no formato DD-MM-AAAA: ");
                scanf("%s", &aluno[na].ingresso);

                printf("\nInsira a nota da Prova 1 e Prova 2: ");
                scanf("%f %f", &aluno[na].p1, &aluno[na].p2);

                aluno[na].media = (aluno[na].p1 + aluno[na].p2)/2;
                    if (aluno[na].media < 6){
                       printf("\no Aluno %s nao foi aprovado, sua media foi %.2f.", aluno[na].nome, aluno[na].media);
                    }
                    else if (aluno[na].media >= 6){
                       printf("\no Aluno %s foi aprovado, sua media foi %.2f.", aluno[na].nome, aluno[na].media);
                    }
                    
            }
        return 0;
    }