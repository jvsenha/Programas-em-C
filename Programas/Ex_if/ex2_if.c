#include <stdio.h>

int main()
{
    int n;
    float val;
    printf("Informe o numero de cadeiras que ira comprar: ");
    scanf("%d", &n);
    if (n <= 50)
    {
        val = n*45;
        printf("o total a pagar = %.2f \n", val);
    }
    else
    {
        val= n*40;
         printf("o total a pagar= %.2f \n", val);
    }
}
