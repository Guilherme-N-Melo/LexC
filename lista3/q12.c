#include <stdio.h> 

int main(){
    int m=0;
    int mp=0;
    for(int i =2; i <=1000; i++){
        int num = i;
        int passos =0;
        if(num%2 ==0){
            num /=2;
        }else{
            num = (3*num)+1;
        }
        passos++;
        if(m < i && mp < passos){
            m=i;
            mp =passos;
        }
        if(num >100000 || passos >500){
            break;
        }
    }
}