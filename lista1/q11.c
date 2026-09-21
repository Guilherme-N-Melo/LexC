#include <stdio.h>
int main (){
    const double g =6.674e-11;
    double m1, m2, r, F;
    printf("Massa do corpo 1 : ");
    scanf("%lf", &m1);
    printf("Massa do corpo 2 : ");
    scanf("%lf", &m2);
    printf("Distância entre os corpos : ");
    scanf("%lf", &r);
    F = g * m1 * m2 / (r * r);
    printf("Força gravitacional : %e\n", F);
    return 0;
}