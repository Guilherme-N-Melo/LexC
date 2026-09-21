#include <stdio.h>

int main (){
    int d,m;
    d=0; m=0;
    printf("Digite o dia: ");
    scanf("%d", &d);
    printf("Digite o mes: ");
    scanf("%d", &m);
    if(d > 28 && m == 2 || d > 30 && (m ==4 || m == 6 || m == 9 || m== 11)){
        printf("Digite corretamente o dia e o mes");
    }
    printf("Data de nascimento : %d / %02d", d, m);
    return 0;
}