#include <stdio.h>

int main(){

    int m =0;
    int mp=0;

    for(int i =2;i <1000; i++){
        int p =0;
        int n=i;
        int v=1;

        while(n != 1){
            if(n%2 ==0){
                n /=2;
            }else{
                n = (3*n)+1;
            }
            p++;
            if(n > 100000 || p>500){
                v = 0;
                break;
            }
        }
        if( v==0){
            continue;
        }
        if(mp<p){
            m=i;
            mp =p;
        }
    printf("O número que completou a maior sequência válida é: %d\n", m);
    printf("Total de passos: %d\n", mp);
    }

    return 0;
}