#include <stdio.h>
#include <math.h>

int main(){
    int resp =0;
    printf("De um número : ");
    scanf("%d", &resp);
    for (int i=2;i <= sqrt(resp);i++ ){
        if(resp%i == 0){
            printf("O número %d não é primo", resp);
            break;
        }
    }
    printf("O número %d é primo", resp);

    return 0;
}