#include <stdio.h>
#include <stdio.h>

int main(void)
{
    int i;
    float v[6] = {2.3, 5.4, 1.0, 7.6, 8.8, 3.9};
    float media = 0;
    for (i=0; i<6; i++)
    {
        media = media + v[i];
    }
    media = media/i;
    printf("%f", media);
    return 0;
}