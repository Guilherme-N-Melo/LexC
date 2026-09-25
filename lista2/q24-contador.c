#include <stdio.h>

int main(){
    int i = 1;
    int v = 0;
    int tot = 0;
    printf("Insira o valor : ");
    scanf("%d", &v);
    while(i<=10){
        tot = v*i;
        printf("%d x %d = %d \n",v, i, tot);
        i++;
    }
    return 0;
}