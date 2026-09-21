#include <stdio.h>

int main (){
    int abs,calc;
    printf("Digite o ano : ");
    scanf("%d",&abs);
    if( abs%4 == 0 && abs%100 != 0 || abs%400 == 0){
        printf("O ano %d é bissexto", abs);
    }

}