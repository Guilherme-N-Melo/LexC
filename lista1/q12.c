#include <stdio.h>

int main(void) {
    int a = 17, b = 5;
    float f;
    char c;

    f = a / b; /* (i) f = 3.000000 */
    //printf("f = %f\n", f);
    f = (float)a / b; /* (ii) f = 3.400000 */
    //printf("f = %f\n", f);
    c = 'A' + 3; /* (iii) c = 'D e 68' (char e int) */
    //printf("c = %c\n", c);
    a = 2.9 + 1.1; /* (iv) a = 4 */
    //printf("a = %d\n", a);

    return 0;
}