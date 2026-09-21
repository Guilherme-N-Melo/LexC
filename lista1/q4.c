#include <stdio.h>

int main (){

    double b,a, p,A;
    printf("Digite a base: ");
    scanf("%lf", &b);
    printf("Digite a altura: ");
    scanf("%lf", &a);
    p= 2*(b+a);
    A = b*a;
    printf("\n O perimetro do retangulo é: %.4g \n A área do retângulo é: %.4g \n", p , A);

    return 0;
}