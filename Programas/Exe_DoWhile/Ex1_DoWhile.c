/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, rest;
    num=1;
    do{
    rest= num*2;
    printf("%d = %d \n", num, rest);
    num++;
    }while(num<=10);
    return 0;
}
