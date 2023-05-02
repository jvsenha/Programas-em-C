/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int idade;
    printf("digite sua idade: ");
    scanf("%d", &idade );
    switch(idade>=18){
        case 1:
            printf("voçe é maior de idade");
            break; 
        default:
            printf("você é menor");
    }
    return 0;
}
