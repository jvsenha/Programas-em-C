#include <stdio.h>
#include <math.h>
void tabuada(int num);
int fatorial(int num);
int elevado(int num, int num2);
int raiz(int num);

void main(){

  int num, num2, op;
  
  printf("Digite um numero para sua opção:\n 1-Tabuada \n 2-Fatorial \n 3-Elevado \n 4-Raiz quadrada \n Escoha: ");
  scanf("%d", &op);
  switch(op){
      case 1:
      printf("Digite um numero:");
      scanf("%d", &num);
      tabuada(num);
      break;
      
      case 2:
      printf("Digite um numero:");
      scanf("%d", &num);
      printf("Fatorial é: %d", fatorial(num));
      break;
       case 3:
      printf("Digite um numero:");
      scanf("%d", &num);
      printf("Digite um que será o expoente:");
      scanf("%d", &num2);
      printf("%d elevado por %d é: %d", num, num2, elevado(num, num2));
      break;
        case 4:
      printf("Digite um numero:");
      scanf("%d", &num);
      printf("Raiz quadrada: %d", raiz(num));
      break;
      
  }

  
}


void tabuada(int num){
    int mult;
    while(mult<11){
    printf("%d x %d = %d \n", num,mult, num*mult);
    mult++;
}
}

int fatorial( int num){
    int fat=1;
    for(int cont; cont<num; num--){
        fat = fat*num;
    }
return fat;
}

int elevado(int num, int num2){
    return pow(num, num2);
}

int raiz(int num){
    return sqrt(num);
}

