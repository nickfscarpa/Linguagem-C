#include<stdio.h>  


int main (void)
{
    int n;
    printf("Digite a quantidade de valores a serem informados: ");
    scanf("%d",&n);
    float vet[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nDigite o %d o. valor: ",i+1);
        scanf("%f",&vet[i]);
    }

    printf("\nA ordem dos valores foi: ");
    for (int j = 0; j < n; j++)
    {
        printf("%.2f - ",vet[j]);
    }
    
    printf("\nA ordem inversa dos valores foi: ");
    for(int k = n-1; k >= 0; k--){
        printf("%.2f - ",vet[k]);
    }
    
    
    return 0;
}
