/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int
main ()
{
  int num, num2;

  printf ("digite o numero inicial: ");
  scanf ("%d", &num);
  printf ("digite o numero final: ");
  scanf ("%d", &num2);
  if (num < num2){
      do
	{
	  printf ("%d \n", num);
	  num++;
	}
      while (num <= num2);
    }
  else if (num2 < num){
    do
	{
	  printf ("%d \n", num);
	  num--;
	}
      while (num >= num2);
    }
  return 0;
}
