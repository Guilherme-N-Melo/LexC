#include <stdio.h>

int main(){
    int i = 1;
    int M,m,v;
    M=0;m=0;v=0; 
    
    while(i<=10){
        printf("Insira o valor : ");
        scanf("%d", &v);
        if(i == 1){
            M=v;
            m=v;
        }

        if(M < v){
            m = M;
            M = v;

        }else if(m < v){
            m = v;

        i++;
    }
    printf("O maior valor foi : %d \n O menor valor foi: %d \n", M,m);
    return 0;
}