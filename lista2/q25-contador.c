#include <stdio.h>

int main(){
    int i = 1;
    int al = 0;
    float not = 0;
    float c = 0;
    printf("Insira a quantidade de alunos : ");
    scanf("%d", &al);
    while(i<=al){
        printf("Insira a %da nota : ", i);
        scanf("%f", &not);
        c += not;
        i++;
    }
    printf("\n A média da turma com %d alunos foi de: %.2f \n",al, c/i );
    return 0;
}