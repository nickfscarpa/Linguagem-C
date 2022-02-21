#include <stdio.h>
#include <string.h>

void inverte_string(char str[]){
    int i=0, n=0;

    //verificar o tamanho da string
    for(i=0; str[i] != '\0';i++){
        n++;
    }
        //percorrer a metade inicial trocando com a metade final
    for(i=0; i<= n/2; i++){
        char temp;

        temp = str[i];
        str[i] = str[n-1-i];
        str[n-1-i] = temp;
    }
    str[n]='\0';    
}



int main(){
    char s1[41];

    printf("Escreva uma string com no maximo 40 caracteres:\n");
    scanf("%40[^\n]",s1);
    
    inverte_string(s1);
    

    printf("A string invertida e:\n");
    printf("%s",s1);

    return 0;
}