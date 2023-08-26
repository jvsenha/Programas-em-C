 #include <stdio.h>
 void main(){
int num, fat=1;

printf(" Digite um numwero inteiro não negativo: ");
scanf("%d", &num);

for(int cont; cont<num; num--){
fat = fat*num;
}
printf("fatorial:%d \n", fat);
}