#include <stdio.h>

int main() {
    int v = 0;
    int contN = 0, contT = 0, contBarra = 0, contAspasD = 0, contAspasS = 0;
    int c;

    while ((c = getchar()) != EOF) {
        switch (v) {
            case 0:
                if (c == '\\') {
                    v = 1;
                }
                break;

            case 1:
                switch (c) {
                    case 'n':
                        contN++;
                        break;
                    case 't':
                        contT++;
                        break;
                    case '\\':
                        contBarra++;
                        break;
                    case '"':
                        contAspasD++;
                        break;
                    case '\'':
                        contAspasS++;
                        break;
                    default:
                        break;
                }
                v = 0;
                break;
        }   
    }

    printf("Total de \\n: %d\n", contN);
    printf("Total de \\t: %d\n", contT);
    printf("Total de \\\\: %d\n", contBarra);
    printf("Total de \\\": %d\n", contAspasD);
    printf("Total de \\': %d\n", contAspasS);

    return 0;
}