#include <stdio.h>
#include <locale.h>
void main()
{
    ��� setlocale(LC_ALL, "");
    ��� int numero;
    ��� printf("Digite um n�mero: ");
    ��� scanf("%d",&numero);
    ��� printf("O n�mero digitado foi %d", numero);
    �
}
