#include <stdio.h>

int main(){
    int tentativa=0;
    int xf =0, yf=0, zf=0;
    for(int x=1; x<=1000; x++){
        for(int y=1; y<=1000; y++){
            int z=1000-x-y;;
            if(z>0 && (x * x + y * y == z * z)){
                xf=x;
                yf=y;
                zf=z;
                goto final;
            }
            tentativa++;
        }
       
    }
    final: 
    printf("Tripla encontrada: x = %d, y = %d, z = %d\n", xf, yf, zf);
    printf("Total de passos: %d\n", tentativa);
    return 0;

}