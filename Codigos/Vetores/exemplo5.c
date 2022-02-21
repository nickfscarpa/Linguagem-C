#include <stdio.h>
#define NUM_ALUNOS 6

int main (void)
{
    float notas[NUM_ALUNOS];  float media, soma = 0.0;  int i;
    /* leitura dos dados via teclado para o vetor */  for(i=0; i<NUM_ALUNOS; i++)
    {
        printf("Entre com a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
        }
    /* soma das medias dos alunos */  for(i=0;i<NUM_ALUNOS;i++)
    soma = soma + notas[i];  media = soma/NUM_ALUNOS;
    
    printf("Media da turma = %.2f\n.", media);
    return 0;
}