# include <stdio.h>
#include <stdio.h>

int main() {
    int a = 10, b = 3;

    printf("%d\n", a / b); //3, pq é int
    printf("%.4f\n", (float)a / b); //3.3333, pq é float
    printf("%d\n", a % b);  //1, pq é o resto da divisão inteira
    printf("%d\n", a += b); //13, pq a = a + b
    printf("%d\n", a *= 2); //26,pq a = a * 2
    printf("%d\n", a == b * 5); //0, pq a não é igual a b * 5

    return 0;
}