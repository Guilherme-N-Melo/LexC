#include <stdio.h>

int main(){
    int n=0;
    int tot=0;
    while (1){
        printf("Digite um número : ");
        scanf("%d", &n);
        if( n == 0){
            break;
        }
        if(n%2 !=0 || n>=10 && n<=20){
            continue;
        }
        tot += n;

    }

    printf("total da soma dos numeros: %d", tot);

    return 0;
}