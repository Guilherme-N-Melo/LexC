#include <stdio.h>

int main(){
    int n=0;
    int tot = 0;
    int s = 0;
    while(s == 0 ){
        printf("Insira o número : ");
        scanf("%d", &n);
        if(n == 0){
            s = 1;
        }else if(n % 2 == 0){
            tot += 1;
        }
    }
    printf("\n-> O total de números pares é : %d \n", tot );
    return 0;
}