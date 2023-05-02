/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float valor;
    int qtn;
    printf("informe a quantidade de cadeiras que serão compradas: ");
    scanf("%d", &qtn );
    switch(qtn<=50){
        case 1:
        valor= qtn*45;
            printf("o total de pagamento é %.2f", valor);
            break; 
        default:
        valor= qtn*40;
         printf("o total de pagamento é %.2f", valor);
    }
    return 0;
}
