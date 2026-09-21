#include <stdio.h>

int main(){

    double c,f,k;
    f=0;k=0;
    printf("CONVERSOR DE CELCIUS PARA FAHRENHEIT E KELVIN \n");

    printf("Informe a temperatura em Celsius: ");
    scanf("%lf", &c);
    f=((9.0/5)*c)+32;
    k=(c + 273.15);
    printf("\n Farenheit = %.2f \n Kelvin = %.2f ", f, k);


    return 0;
}