#include <stdio.h>

void conceitos(float vet[], int num, int conceito[]){
    

    for(int i=0;i<num;i++){

        if(vet[i]>=9 && vet[i]<=10){
            conceito[0] = conceito[0] + 1;
        } else if(vet[i]>=7 && vet[i]<9){
            conceito[1] = conceito[1] + 1;
        } else if(vet[i]>=5 && vet[i]<7){
            conceito[2] = conceito[2] +1;
        } else if(vet[i]>=3 && vet[i]<5){
            conceito[3] = conceito[3]+1;
        } else if(vet[i]>=0 && vet[i]<3){
            conceito[4] = conceito[4] +1;
        }
    }

    printf("Foram registrados %d alunos com conceito A.\n",conceito[0]);
    printf("Foram registrados %d alunos com conceito B.\n",conceito[1]);
    printf("Foram registrados %d alunos com conceito C.\n",conceito[2]);
    printf("Foram registrados %d alunos com conceito D.\n",conceito[3]);
    printf("Foram registrados %d alunos com conceito E.\n",conceito[4]);
}

int negativos(int vet[], int num){
    int neg=0;

    for(int i=0;i<num;i++){
        if(vet[i]<0){
            neg++;
        }
    }

    return neg;
}

int main(){
    int n;
    
    printf("Infome a quantidade de valores: ");
    scanf("%d",&n);

    int v[n];

    for(int i=0; i<n; i++){
        printf("Infome os valores: ");
        scanf("%d",&v[i]);
    }

    
    printf("O total de numeros negativos foi de %d.",negativos(v,n));





    return 0;
}