/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float valor;
    int forma;
    printf("informe o valor: ");
    scanf("%f", &valor );
     printf("digete a forma de pagamento:\n 1-à vista \n 2- à prazo\n");
    scanf("%d", &forma );
    switch(forma==1){
        case 1:
            printf("o total de pagamento é %2.f", valor);
            break; 
        default:
        valor= valor-(valor*0.1);
         printf("o total de pagamento é %2.f", valor);
    }
    return 0;
}
