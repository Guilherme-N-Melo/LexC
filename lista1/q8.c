#include <stdio.h>

// a) int
void a(){
    int z = 92;
    printf("\n O numero de atomos de uranio é : %d", z);

}
// b)double e %.15f
void b(){
    double pi = 3.14159265358979323846;
    printf("\n O numero de pi é : %.15f", pi);
    
}
// c) char e e[0]
void c(){
    char e[7] = "Uranio";
    printf("\ nSimbolo quimico de um elemento : %c ", e[0]);

    
}
// d)podemos usar tanto double como long long 
void d(){
    double populacao = 8e9;
    long long populacao2 = 8e9;
    printf("\n Populacao mundial : %.0f \n", populacao);
    printf("Populacao mundial : %lld \n", populacao2);
    
}
// e)double
void e(){
    double carga_eletron = 1.602e-19; 
    printf("\n Carga do eletron : %.3e", carga_eletron);

    
}
// f)int
void f(){
    int kaboom =1;
    int Nkaboom = 0;
    printf("\n Reação nuclear critica : %d \n A reaçãonuclear não é critica : %d", kaboom, Nkaboom);
 
}


int main(){
    a();
    b();
    c();
    d();
    e();
    f();
    return 0;
}