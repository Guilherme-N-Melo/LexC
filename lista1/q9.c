# include <stdio.h>
int main () {
    double d = 9.99;
    int i = d;
    float f = i;
    char c = 65;
    printf ("%d %.2f %c\n", i, f, c);
    return 0;
}

/*

a- o programa compila

b- impressão: 9 9.00 A

c- existe perda de informação pois o valor de d é 9.99 
e ao ser convertido para inteiro perde-se a parte decimal, ficando apenas 9
e ao ser convertido para float, o valor 9 é convertido para 9.00
curiosamente, o valor de c é 65, que é o código ASCII para a letra A, então ao ser impresso como char, ele imprime A

*/