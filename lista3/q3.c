#include <stdio.h>

int main(){
    int c;
    int totV=0;
    int totL=0;
    while((c=getchar()) != EOF){
        totL++;
        switch(c){
            case 'a':  case 'A':
            case 'e':  case 'E':
            case 'i':  case 'I':
            case 'o':  case 'O':
            case 'u':  case 'U':
                totV++;
                break;
            default:
            break;
        }

    }
        printf("Total de vogais: %d\n", totV);
        printf("Total de letras: %d\n", totL);

    return 0;
}