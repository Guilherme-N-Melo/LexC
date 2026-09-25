#include <stdio.h>

int main(){
     int r =0;
     int s =0; 
     int resp =0;

    printf("------------------------------\n");
    printf("     TIPO DE COMBUSTÍVEL\n");
    printf("------------------------------\n");

    while(s == 0){
        printf("1- Álcool \n 2- Gasolina \n 3- Diesel \n 4- Fim ");
        scanf("%d", &resp);
        if( resp == 4){
            s ==1;
        }

    }

    return 0;
}