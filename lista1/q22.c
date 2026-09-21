#include <stdio.h>

int main(){
    double p, tot;
    printf("Para calcular a tarifa de energia eletrica coloque o consumo em kWH \n");
    scanf("%lf", &p);
    
    if(p <= 100){
        tot = p * 0.40;
        printf("O total a ser pago e: R$ %.2f\n", tot);
    }
    if(p >= 101 && p <= 200){
        tot = p * 0.55;
        printf("O total a ser pago e: R$ %.2f\n", tot);
    }
    if(p >= 201 && p <= 400){
        tot = p * 0.70;
        printf("O total a ser pago e: R$ %.2f\n", tot);
    }
    if(p > 400){
        tot = p * 0.90;
        printf("O total a ser pago e: R$ %.2f\n", tot);
    }
    
    return 0;
}

