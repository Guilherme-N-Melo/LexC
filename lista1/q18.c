#include <stdio.h>
int main (){
    float a,b,c,delta;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    printf("Equação do segundo grau : %.2fx^2 + %.2fx + %.2f \n", a,b,c); 
    
    delta = (b*b) - 4*a*c;

    if(delta < 0){
        printf("A equação não possui raizes reais \n");
    }
    printf("O valor de delta é : %.4f \n", delta);
}