#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = (b * b) - (4 * a * c);

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raizes distintas: %.2lf e %.2lf\n", x1, x2);
    }

    if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Raiz dupla: %.2lf\n", x1);
    }

    if (delta < 0) {
        printf("Nao ha raizes reais.\n");
    }

    return 0;
}