#include <stdio.h>

int main (){
    float a =3.14159;
    int b= 3;
    printf("O valor de a é : %f \n", a);
    printf("O valor de b é : %d \n", b);
    return 0;
}

//quando atribuimos o float a uma variavel reservamos um armazenamento de 4 bytes, e quando atribuimos o int a uma variavel reservamos um armazenamento de 2 bytes,
//quando imprimimos o valor de a, ele imprime o valor de a com 6 casas decimais, e quando imprimimos o valor de b, ele imprime o valor de b com 0 casas decimais, pois o tipo int não possui casas decimais.