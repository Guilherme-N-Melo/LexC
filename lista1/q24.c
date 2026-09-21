#include <stdio.h>

int main() {
    double x, y;

    printf("Digite as coordenadas x e y: ");
    scanf("%lf %lf", &x, &y);

    if (x == 0 && y == 0) {
        printf("Origem\n");
    }

    if (x == 0 && y != 0) {
        printf("Eixo Y\n");
    }

    if (y == 0 && x != 0) {
        printf("Eixo X\n");
    }

    if (x > 0 && y > 0) {
        printf("Quadrante I\n");
    }

    if (x < 0 && y > 0) {
        printf("Quadrante II\n");
    }

    if (x < 0 && y < 0) {
        printf("Quadrante III\n");
    }

    if (x > 0 && y < 0) {
        printf("Quadrante IV\n");
    }

    return 0;
}