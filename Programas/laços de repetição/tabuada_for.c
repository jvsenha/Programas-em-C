#include <stdio.h>
void main(){

  int num;
  printf("Digite um numero: ");
  scanf("%d", &num);

  for(int mult=0; mult<11; mult++){
    	printf("%d x %d = %d \n", num, mult, num*mult);
	}
}
