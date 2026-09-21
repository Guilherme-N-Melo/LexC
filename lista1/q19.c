#include <stdio.h>
int main (){

    char a[5];
    printf("Digite um numero inteiro de 4 digitos : ");
    scanf("%s", &a);
    printf(" \n %c / %c / %c / %c \n", a[0], a[1],a[2],a[3]);
    printf("\n Soma dos numeros : %d \n", (a[0]-'0') + (a[1]-'0') + (a[2]-'0') + (a[3]-'0'));
    return 0;
}