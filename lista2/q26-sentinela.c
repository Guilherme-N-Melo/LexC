#include <stdio.h>

int main(){
    int i = 1;
    float not = 0;
    float c = 0;
    int s = 0;
    while(s == 0 ){
        printf("Insira a %da nota : ", i);
        scanf("%f", &not);
        if(not == -99){
            s = 1;
        }
        c += not;
        i++;
    }
    printf("\n-> A média da turma foi de: %.2f \n", c/i );
    return 0;
}