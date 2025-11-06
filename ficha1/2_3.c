

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *phrase,size_t tamanho);
int main(){

    char phrase[100];
    reverse(phrase,sizeof(phrase));

return 0;

}

void reverse(char *phrase,size_t tamanho){
    int i = 0;
    char dummy[100];

    printf("Escreve uma mensagem:\n");
    fgets(phrase, tamanho,stdin);

    int lenReal = strlen(phrase)-2;
    for(;i<strlen(phrase)-1;i++){
        dummy[i] = phrase[lenReal-i];
    }
    dummy[i] = '\0';
    printf("Reversed phrase: %s\n", dummy);

}
