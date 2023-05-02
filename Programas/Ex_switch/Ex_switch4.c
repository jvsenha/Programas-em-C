/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int idade, cnh;
    printf("digite sua idade: ");
    scanf("%d", &idade );
    printf("voçe possui habilitação?\n 0-não tenho \n 1-tenho \n informe a situação: ");
    scanf("%d", &cnh );
    switch(idade>=18 && cnh==1){
        case 1:
            printf("voçe pode dirigir o veiculo");
            break; 
        default:
            printf("voçe não pode dirigir o veiculo");
    }
    return 0;
}
