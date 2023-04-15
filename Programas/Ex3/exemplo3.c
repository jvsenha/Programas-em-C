#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main()
{
setlocale(LC_ALL, "");
float peso, alt, imc;
printf("Digite seu peso: ");
scanf("%f", &peso);
printf("Digite sua altura: ");
scanf("%f", &alt);
imc = peso/(alt*alt);
printf("Digite seu IMC é: %f", imc);
}
