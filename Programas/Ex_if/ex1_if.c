#include <stdio.h>

int main()
{
    int n;
    printf("Digite a sua idade: ");
    scanf("%d", &n);
    if (n < 18)
    {
        printf("você possui %d anos e menor de idade\n", n);
    }
    else
    {
        printf("você possui %d anos e maior de idade\n", n);
    }
}
