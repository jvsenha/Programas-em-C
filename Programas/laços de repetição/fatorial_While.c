#include <stdio.h>
void main(){
int num, cont=1, fat=1;

printf(" Digite um numwero inteiro não negativo: ");
scanf("%d", &num);

while(cont<num){
fat = fat*num;
num--;
}
printf("fatorial:%d \n", fat);
}
