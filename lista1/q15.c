#include <stdio.h>

int main(void) {
    int x = 5, y = 10, z;
    z = x++;
    z += ++y;
    x = x * 2 - y--;
    printf("%d %d %d\n", x, y, z);
    return 0;
}

/*

1. variáveis e valores iniciais:
   - x = 5
   - y = 10
   - z = não inicializado
2. operações e resultados:
z = x++ → z = 5, x = 6
z += ++y → y = 11, z = 5 + 11 = 16
x = x * 2 - y-- → x = 6 * 2 - 11 = 12 - 11 = 1, y = 10

*/