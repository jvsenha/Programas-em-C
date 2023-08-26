#include <stdio.h>

void main(){
int num, mult;

printf("Digite um numero: ");
scanf("%d", &num);
do{
printf("%d x %d = %d \n", num,mult, num*mult);
mult++;
}while(mult<11);
}
