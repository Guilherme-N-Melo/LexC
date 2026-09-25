#include <stdio.h>

int main(){
    char fruta[20];
    int i=0;
    printf("Qual sua fruta favorita?");
    gotinha:
    if(i<3){
        printf("%d \n",i);
        i++;
    goto gotinha;
    }

    scanf("%19s",&fruta);
    return 0;
}


