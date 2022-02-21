#include <stdio.h>

int main(void)
{
    int i;
    float v[6] = {2.3, 5.4, 1.0, 7.6, 8.8, 3.9};
    float maior_valor = v[0];
    for (i=0; i<6; i++)
    {
        if(v[i] > maior_valor)  
            maior_valor = v[i];
    }
    printf("%f", maior_valor);
    return 0;
}