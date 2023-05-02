#include <stdio.h>

 

int main()
{
  char estadoCivil;
  printf("digite [c] para casado(a) \n");
  printf("digite [s] para solteiro(a) \n");
  printf("digite [d] para divorciado(a) \n");
  printf("digite [v] para viuvo(a) \n");
  printf("Qual seu estado estado civil:");
  scanf("%c", &estadoCivil);
  switch(estadoCivil){
    case 'c':
        printf("\n o estado civil selecionado foi casado(a) \n");
        break;
    case 's':
        printf("\n o estado civil selecionado foi solteiro(a) \n");
        break;
    case 'd':
        printf("\n o estado civil selecionado foi (a) divorciado\n ");
        break;
    case 'v':
        printf("\n o estado civil selecionado foi viuvo(a) \n ");
        break;
    default:
    printf("\n opção não invalida \n");
  }

}