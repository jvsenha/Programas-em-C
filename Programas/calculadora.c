#include <stdio.h>
int soma(int num1, int num2);
int sub(int num1, int num2);
int mult(int num1, int num2);
float divi(int num1, int num2);

void main()
{
    int num1, num2;
    printf(" digite um numero:");
    scanf("%d %d", &num1, &num2);
    printf(" soma: %d", soma( num1, num2));
     printf(" subtração: %d", sub( num1, num2));
      printf(" multiplicação: %d", mult( num1, num2));
       printf(" divisão: %g", divi(num1, num2));
}

int soma(int num1, int num2)
{
    return num1 + num2;
}
int sub(int num1, int num2)
{
    return num1 - num2;
}
int mult(int num1, int num2)
{
    return num1 * num2;
}
float divi(int num1, int num2)
{
    return (float) num1 / num2;
}