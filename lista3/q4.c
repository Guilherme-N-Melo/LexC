#include <stdio.h>

int main(){
    float num1 = 0;
    float num2 = 0;
    float r=0;
    char op;

    printf("Digite a expressão para calcular: \n");
    scanf("%f %c %f",&num1, &op, &num2 );

    switch (op){
        case '+':
        r= num1+num2;

        break;
        case '-':
        r= num1-num2;

        break;
        case 'x':
        r= num1*num2;

        break;
        case '/':
        r= num1/num2;

        break;
        case '%':
        r= num1*(num2/100);
        
        break;
        default:
        printf("Operador inválido/inexistente");
    }

    printf("\nResultado : %.2f \n", r);
    
    return 0;
}