#include <stdio.h>
#include <math.h> 

float area_circulo(float r){
    float a, pi=3.14159;

    a = pi * pow(r,2);
    return a; 
}

float diametro_circulo(float r){
    float d;

    d = 2 * r;
    return d; 
}

float perimetro_circulo(float r){
    float p, pi=3.14159;

    p = 2 * pi * r;
    return p;
}

void calcula_circulo(float r, float *area, float *circunferencia){
    float pi = 3.14159;

    *area = pi * pow(r,2);
    *circunferencia = 2 * pi * r;
}

int main(void)
{
	float raio, teste = 1;  
	
    while (teste==1){
        printf("Entre com o valor do raio: ");
        scanf("%f", &raio);
        if (raio>0) {
            float  area, diametro, perimetro;

            /* funções sem ponteiro
            area = area_circulo(raio);
            diametro = diametro_circulo(raio);
            perimetro = perimetro_circulo(raio);
            */

            //função com ponteiro

            calcula_circulo(raio,&area,&perimetro);

            printf("Área do círculo= ");
            printf("%.2f ", area);
            printf("Perímetro do círculo= ");
            printf("%.2f\n", perimetro);
            //printf("Diâmetro do círculo= ");
            //printf("%.2f ", diametro);
        }
        else {
            teste = 0;
            printf("Valor incorreto.");
        }
    }

	return 0;
}
