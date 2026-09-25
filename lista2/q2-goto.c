#include <stdio.h>

int main(){
    int s,n1,n2 =0;
    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    if(n1 == 0 || n2 == 0){
        goto jump;
    }
    printf("Soma total: %d \n", s=n1+n2);
    return 0;

    jump:
    printf("Somando zero? \n");
    return 0;
}