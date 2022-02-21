#include <stdio.h>
#define MaxClientes 200

int main(){
    float contas[MaxClientes][2];
    int conta = 1, total_clientes=0;
    float media=0;

    for(int i=0;i<MaxClientes;i++){
        printf("Digite a conta do cliente. Caso deseja encerrar digite 0.\n");
        scanf("%d", &conta);

        if(conta == 0){
            break;
        } else {
            contas[i][0] = conta;
            printf("Digite o saldo do cliente.\n");
            scanf("%f", &contas[i][1]);
            total_clientes++;
            media = media + contas[i][1];
        }
    }

    media = media/total_clientes;

    for(int i=0;i<total_clientes;i++){
        printf("Cliente %d - Conta %.0f e Saldo R$ %.2f.",i+1,contas[i][0],contas[i][1]);
        if(contas[i][1] < media){
            printf(" Saldo abaixo da media.\n");
        } else if(contas[i][1] > media){
            printf(" Saldo acima da media.\n");
        } else {
            printf(" Saldo igual a media.\n");
        }       
    }
    
    return 0;
}
