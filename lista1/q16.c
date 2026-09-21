#include <stdio.h>
#include <math.h>

//a) (a+b)/(c-d) - dado mais adequado é float
void a(){
    float a,b,c,d, resultado;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    printf("Digite o valor de d: ");
    scanf("%f", &d);
    resultado = (a+b)/(c-d);
    printf("\n O resultado da expressão (a+b)/(c-d) é : %.2f \n", resultado);
}

//b) sqrt((b*b)- 4*a*c) - dado mais adequado é double
void b(){
    double a,b,c, resultado;
    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    printf("Digite o valor de c: ");
    scanf("%lf", &c);
    resultado = sqrt((b*b)- 4*a*c);
    printf("\n O resultado da expressão sqrt((b*b)- 4*a*c) é : %.2lf \n", resultado);
}
//c) ((3*x+2*y)*(3*x+2*y))/(5*5) - dado mais adequado é float
void c(){
    float x,y, resultado;
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de y: ");
    scanf("%f", &y);
    resultado = ((3*x+2*y)*(3*x+2*y))/(5*5);
    printf("\n O resultado da expressão ((3*x+2*y)*(3*x+2*y))/(5*5) é : %.2f \n", resultado);
}
//d) ((a*a)+(b*b))%n - dado mais adequado é int
void d(){
    int a,b,n, resultado;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    resultado = ((a*a)+(b*b))%n;
    printf("\n O resultado da expressão ((a*a)+(b*b))%%n é : %d \n", resultado);
}

int main(){
    a();
    b();
    c();
    d();
    return 0;
}