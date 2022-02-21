#include <stdio.h>

void ler(int *x, int *y, int *z){
    printf("Digite 3 numeros: ");
    scanf("%d %d %d",x,y,z);
}

int par(int n){
    if (n%2 == 0){
        return 1;
    } else {
        return 0;
    }  
}

void ordenar(int *menor, int *intermediario, int *maior){
    int temp, temp2;

    if(*menor > *intermediario){
        if(*menor > *maior){ //*menor maior de todos
            if(*maior > *intermediario){ //*maior é do meio
            
                printf("%d %d %d ",*intermediario,*maior,*menor);
                if(par(*menor) == 1 ){
                    printf("(par)\n");
                } else{
                    printf("(impar)\n");
                }

                // executar função par com *menor
                temp = *menor;
                *menor = *intermediario;
                *intermediario = *maior;
                *maior = temp;                
            } else{ //*maior é o ultimo
                //printf("%d %d %d\n",*maior,*intermediario,*menor);
                // executar função par com *menor
                temp = *menor;
                *menor = *maior;
                *maior = temp;
                
            }
        } else{ // menor> intermediario e menor < maior
            //printf("%d %d %d\n",*intermediario,*menor,*maior);
            // executar função par com *maior
            temp = *intermediario;
            *intermediario = *menor;
            *menor = temp;
        }
    } else { // *intermediario > *menor 
        if(*intermediario > *maior){ //*intermediario maior de todos
            if(*maior > *menor){ //*maior é o do meio
                //printf("%d %d %d\n",*menor,*maior,*intermediario);
                // executar função par com *intermediario
                temp = *intermediario;
                *intermediario = *maior;
                *maior = temp;
                
            } else{ //*maior é o ultimo
                //printf("%d %d %d\n",*maior,*menor,*intermediario);
                // executar função par com *intermediario
                temp = *intermediario;
                *intermediario = *menor;
                *menor = * maior;
                *maior = temp;

            }
        }else { //*maior é o maior de todos, intermediario do meio, menor por fim
           //printf("%d %d %d\n",*menor,*intermediario,*maior);
           // executar função par com *maior
        }
    }
}


int main(){

    int v1, v2, v3;
    int continuar = 1;

    do{
        ler(&v1,&v2,&v3);
        //printf("%d %d %d\n",v1,v2,v3);
        ordenar(&v1,&v2,&v3);

        printf("Os numero ordenados sao %d %d %d ",v1,v2,v3);
        if(par(v3) == 1 ){
            printf("(par)\n");
        } else{
            printf("(impar)\n");
        }

        printf("Quer continuar? (0/1) ");
        scanf("%d",&continuar);
    }while(continuar == 1);

    

    return 0;
}