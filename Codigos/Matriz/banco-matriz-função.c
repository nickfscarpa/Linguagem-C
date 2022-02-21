#include <stdio.h>
#define MaxClientes 200

int inserir_dados(float mat[][2]){
    int conta=1,total=0;

    for(int i=0;i<MaxClientes;i++){
        printf("Digite a conta do cliente. Caso deseja encerrar digite 0.\n");
        scanf("%d", &conta);

        if(conta == 0){
            return total;
        } else {
            mat[i][0] = conta;
            printf("Digite o saldo do cliente.\n");
            scanf("%f", &mat[i][1]);
            total++;
        }
    }
    return total;
}

float media_saldos(float mat[][2], int total){
    float media = 0;

    for(int i=0; i< total; i++){
        media = media + mat[i][1];
    }
    
    printf("A media dos saldos foi de R$ %.2f.\n",media/total);
    
    return media/total;
}

void listar_dados(float mat[][2], int total, float media){
    
    for(int i=0;i<total;i++){
        printf("Cliente %d - Conta %.0f e Saldo R$ %.2f.",i+1,mat[i][0],mat[i][1]);
        if(mat[i][1] < media){
            printf(" Saldo abaixo da media.\n");
        } else if(mat[i][1] > media){
            printf(" Saldo acima da media.\n");
        } else {
            printf(" Saldo igual a media.\n");
        }       
    }

}

int main(){
    float contas[MaxClientes][2];
    int total_clientes;
    float media;

    total_clientes = inserir_dados(contas);
    
    media = media_saldos(contas,total_clientes);

    listar_dados(contas,total_clientes,media);

    //listar_dados(contas,total_clientes,media_saldos(contas,total_clientes));
        
    return 0;
}
