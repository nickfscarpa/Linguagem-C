#include <stdio.h>

#define MAX_ALUNOS 50

int main(){
    float notas[MAX_ALUNOS][4];
    float media=0;
    int n = 0, sair=0;

    //leitura das notas
    for(n=0;sair!=1 && n<MAX_ALUNOS;n++){
        printf("Digite a nota da Prova 1 do aluno %d.\n",n+1);
        scanf("%f",&notas[n][0]);
        printf("Digite a nota da Prova 2 do aluno %d.\n",n+1);
        scanf("%f",&notas[n][1]);
        printf("Digite a nota da Prova 3 do aluno %d.\n",n+1);
        scanf("%f",&notas[n][2]);
        //media de cada aluno
        notas[n][3] = (notas[n][0]+notas[n][1]+notas[n][2])/3;
        printf("Digite 0 para inserir uma notas de um novo aluno ou 1 para SAIR.\n");
        scanf("%d",&sair);
    }
    
    //media da disciplina
    for(int i=0; i<n;i++){
        media = media + notas[i][3];
    }
    media = media/n;
    printf("A media da disciplina foi de %.2f.\n",media);

    //mostrar média de cada aluno
    printf("A media de cada aluno foi de:\n");
    for(int i=0; i<n; i++){
        if(notas[i][3] >=7){
            printf("Aluno %d \t Media: %.2f \t Aprovado.\n",i+1,notas[i][3]);
        } else{
            printf("Aluno %d \t Media: %.2f \t Reprovado.\n",i+1,notas[i][3]);
        }
    }

    return 0;
}