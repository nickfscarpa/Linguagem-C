#include <stdio.h>

#define N 4

int simetrica(double A[][N])
{
    int i, j;
    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            if (A[i][j] != A[j][i])  
            return 0;
        }
    }
    return 1;
}

void cria_transposta(double A[][N], double T[][N])
{
    int	i, j;
    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            T[j][i] = A[i][j];
        }
    }
}

void transpoe(double A[][N])
{
    int i, j;
    for (i=0; i<N; i++)
    {
        for (j=0; j<i; j++)
        {
            double t = A[i][j];  
            A[i][j] = A[j][i];  
            A[j][i] = t;
        }
    }
}

void mult_matriz_escalar(double A[][N], double s, double B[][N])
{
    int i, j;
    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            B[i][j] = s * A[i][j];
        }
    }
}

void mult_matriz_matriz(double A[][N], double B[][N], double C[][N])
{
    int i, j, k;
    for (i=0; i<N; i++)
    {
        
        for (j=0; j<N; j++)
        {
            C[i][j] = 0.0;
            for (k=0; k<N; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
            printf("%lf \t", C[i][j]);
        }
        printf("\n");
    }
}

void matriz_identidade(double m[][N]){
    int i, j;
    for (i=0; i<N; i++)
    {        
        for (j=0; j<N; j++)
        {
            if (i==j){
                m[i][j]=1;
            } else{
                m[i][j]=0;
            }
            printf("%.0lf \t", m[i][j]);
        }
        printf("\n");
    }
}

int main(){

    double y[N][N]= {{1,2,3,4},{4,3,2,1},{5,6,7,8},{8,7,6,5}};
    double x[N][N]= {{1,0,0,1},{1,2,2,1},{0,1,1,0},{2,1,1,2}};
    double i[N][N], m[N][N];

    matriz_identidade(i);
    
    mult_matriz_matriz(y,i,m);

    return 0;
}