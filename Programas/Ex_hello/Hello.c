#include <stdio.h>
#include <locale.h>
void main()
{
        setlocale(LC_ALL, "");
        int numero;
        printf("Digite um número: ");
        scanf("%d",&numero);
        printf("O número digitado foi %d", numero);
     
}
