#include <stdio.h>

int main(){
    int valor, *pvalor;
    valor= 123;
    pvalor= &valor;
    printf("valor: %d\n", valor);
    printf("valor: %d\n", *pvalor);
    printf("end: %p\n", valor);
    printf("end: %p\n", *pvalor);

}