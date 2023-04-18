#include <stdio.h>

int main()
{
    int n;
    float val;
    printf("Informe o valor do produto: ");
    scanf("%f", &val);
    printf("forma de pagamento:\n 1 - a vista \n 2 - a prazo \n forma: ");
    scanf("%d", &n);
    if (n == 1)
    {
        val = val-(val*0.10);
        printf("o total a pagar = %.2f \n", val);
    }
    else if(n == 2)
    {
         printf("o total a pagar= %.2f \n", val);
    }
    else{
        printf("essa opção não é valida");
    }
}
