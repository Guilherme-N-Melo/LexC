#include <stdio.h>
int main (){
    int a,b;
    printf("Digite dois numeros inteiros : ");
    scanf("%d %d", &a, &b);
    printf("Soma : %d \n", a+b);
    printf("Subtração : %d \n", a-b);
    printf("Multiplicação : %d \n", a*b);
    if(b == 0){
        printf("Divisão : Não é possivel dividir por zero \n");
    }else{
        printf("Divisão : %d \n", a/b);
    }
    return 0;
}