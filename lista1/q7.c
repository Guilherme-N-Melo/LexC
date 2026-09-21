#include <stdio.h>

int main(){
    char a[4];
    printf("De um numero inteiro de 3 digitos : "); 
    scanf("%s", &a);
    printf(" \n %c / %c / %c \n", a[0], a[1],a[2]);

    return 0;
}