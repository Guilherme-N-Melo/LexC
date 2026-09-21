#include <stdio.h>

int main(){
    double a, b, r;
    char op;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &a);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &op); 

    printf("Digite o segundo numero: ");
    scanf("%lf", &b);

    if (op == '+') {
        r = a + b;
        printf("Resultado: %.2lf\n", r);
    }

    if (op == '-') {
        r = a - b;
        printf("Resultado: %.2lf\n", r);
    }

    if (op == '*') {
        r = a * b;
        printf("Resultado: %.2lf\n", r);
    }

    if (op == '/' && b != 0) {
        r = a / b;
        printf("Resultado: %.2lf\n", r);
    }

    if (op == '/' && b == 0) {
        printf("Erro: Divisao por zero!\n");
    }

    if (op != '+' && op != '-' && op != '*' && op != '/') {
        printf("Operador invalido!\n");
    }

    return 0;
}