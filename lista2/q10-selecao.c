#include <stdio.h>

int main(){
    int n1=0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    if(n1 %3 == 0 && n1 %5 == 0 ){
        printf("O numero %d é divisível por 3 e 5");     
    }else{
        printf("Não é divisível por 5 e 3");
    }
    return 0;
}