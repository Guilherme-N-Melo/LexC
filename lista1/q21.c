#include <stdio.h>

int main (){
    float a, b, c;
    
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    
    if (a + b > c && a + c > b && b + c > a) {
        printf("é um triangulo \n");
        
        if (a == b && b == c) {
            printf("é um triangulo equilatero \n");
        }
        
        if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) {
            printf("é um triangulo isosceles \n");
        }
        
        if (a != b && b != c && a != c) {
            printf("é um triangulo escaleno \n");
        }
    }
    
    return 0;
}