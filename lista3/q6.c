#include <stdio.h>

int main() {
    int valor =0;
    char modo;

    printf("Insira o valor monetario (em reais inteiros, ex: 157): ");
    scanf("%d", &valor);

    printf("[Insira o modo (letra minuscula)]\n");
    printf(" a - Calcular todas as notas/moedas\n");
    printf(" b - Agrupar notas maiores ou iguais a 20\n");
    printf(" c - Decompor troco < 10\n");
    scanf(" %c", &modo);

    printf("\n--- Resultado ---\n");

    switch (modo) {
        case 'a':
            printf("Notas de 100: %d\n", valor / 100);
            valor %= 100;

            printf("Notas de 50: %d\n", valor / 50);
            valor %= 50;

        case 'b':
            printf("Notas de 20: %d\n", valor / 20);
            valor %= 20;

            printf("Notas de 10: %d\n", valor / 10);
            valor %= 10;

        case 'c':
            printf("Notas de 5: %d\n", valor / 5);
            valor %= 5;

            printf("Notas de 2: %d\n", valor / 2);
            valor %= 2;

            printf("Moedas de 1: %d\n", valor / 1);
            valor %= 1;
            break;

        default:
            printf("Modo invalido!\n");
            break;
    }

    return 0;
}