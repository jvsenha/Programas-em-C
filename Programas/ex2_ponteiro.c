#include <stdio.h>

 void trocar (int *num1, int *num2);

 
 
int main () {
    
int num1=10, num2=23;
trocar (&num1, &num2);
printf ("Num 1: %d\n", num1);
printf ("Num 2: %d\n", num2);
} 
 
void
trocar (int *num1, int *num2) 
{
int numt;
 numt= *num1 ;
 *num1 = *num2 ;
 *num2= numt ;
} 
