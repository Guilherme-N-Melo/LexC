#include <stdio.h>
//N pude usar o else :/
int main (){
    double nota;
    printf("Digite a nota do aluno : ");
    scanf("%lf", &nota);
    if(nota < 5){
        printf("D\n");
    }
    if(nota >= 5 && nota < 7){
        printf("C\n");
    }
    if(nota >= 7 && nota < 9){
        printf("B\n");
    }
    if(nota >= 9 && nota <= 10){
        printf("A\n");
    }
    return 0;
}