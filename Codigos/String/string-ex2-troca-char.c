#include <stdio.h>
#include<string.h>

void troca_letra(char str[], char original, char novo){
    int i;

    for(i=0; str[i] != '\0';i++){
        if(str[i] == original){
            str[i] = novo;
        }        
    }

}

int main(){

    char c1,c2;
    char str[41];

    printf("Digite uma string:\n");
    scanf("%40[^\n]",str);
    printf("Digite um caracter que gosta de trocar:\n");
    scanf(" %c",&c1);
    printf("Digite qual caracter irar substituir:\n");
    scanf(" %c",&c2);

    troca_letra(str,c1,c2);

    printf("A string final foi:\n");
    printf("%s",str);

    return 0;
}