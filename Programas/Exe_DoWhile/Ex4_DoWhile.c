/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, rest;
    do{
    rest=num%2;
    if(rest==0){
    printf("%d \n", num);
    }
    num++;
    }while(num<=10);
    return 0;
}
