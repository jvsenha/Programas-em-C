#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL, "");
    float valor;
    float parcl;
    int quant;
    printf("Qual é o valor do produto? \n");
    scanf("%f", &valor);
    printf("Quantas parcelas  deseja pagar? \n");
    scanf("%d", &quant);
    parcl = valor/quant;
    printf("O valor de cada parcela será %.f \n", parcl);
}
