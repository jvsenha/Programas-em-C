#include <stdio.h>
#include <stdlib.h>
void main()
{
    int dist, litro;
    float consumo;
    printf("Digite a dist�ncia percorrida: ");
    scanf("%d",&dist);
    printf("\nDigite a quantidade de litros gastos: ");
    scanf("%d",&litro);
    consumo = dist/litro;
    printf("\n\nO consmo m�dio do v�iculo = %f\n", consumo);
    system("pause");
}
