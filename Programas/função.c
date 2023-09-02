#include <stdio.h>

void impriminome();
float pi();
float maiorvalor( float num1, float num2);
void imprimirpi(float pi);

void main(){
    impriminome();
    impriminome();
    impriminome();
    printf("\n%g\n", pi());
    printf("Maior: %f \n", maiorvalor(5,pi()));
    imprimirpi(3.14156);
}


void impriminome(){
    printf("joao");
}

float pi(){
    impriminome();
    return 3.14;
}

float maiorvalor( float num1, float num2){
    return num1>=num2?num1:num2;
}
 void imprimirpi( float pi){
    printf("PI= %f\n", pi);
 }



