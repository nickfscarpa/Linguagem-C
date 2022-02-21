#include <stdio.h>

int main(void)
{
    int i;
    float v[6] = {2.3, 5.4, 1.0, 7.6, 8.8, 3.9};

    for (i=0; i<6; i++)
    {
        printf("v[%d] = %.1f\n", i, v[i]);
    }

    return 0;
}