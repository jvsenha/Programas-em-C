/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float sal;
    int idade, temp;
    printf("digite seu salario: ");
    scanf("%f", &sal );
     printf("digite seu tempo de serviço (anos): ");
    scanf("%d", &temp );
     printf("digite sua idade: ");
    scanf("%d", &idade );
    switch(idade>30 && temp>3 && sal<4000){
        case 1:
            printf("voçe pode ter reajuste");
            break; 
        default:
            printf("voçe não pode ter reajuste");
    }
    return 0;
}
