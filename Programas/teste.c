
7 -
#include <stdio.h>

    void main()
{

    short int i;
    float a, b, c, mai, med, men;

    printf("Digite um num numeros valores:\n");

    scanf("%f %f %f", &a, &b, &c);

    if (a > b && b > c)
    {
        mai = a;
        med = b;
        men = c;
    }
    else if (a > c && c > b)
    {
        mai = a;
        med = c;
        men = b;
    }
    else if (b > a && a > c)
    {
        mai = b;
        med = a;
        men = c;
    }
    else if (b > c && c > a)
    {
        mai = b;
        med = c;
        men = a;
    }
    else if (c > b && b > a)
    {
        mai = c;
        med = b;
        men = a;
    }
    else if (c > a && a > b)
    {
        mai = c;
        med = a;
        men = b;
    }
    printf("qual forma os numeros devem ser mostrados:\n1-ordem crescente\n2-ordem decrescente\n3-o maior entre a, b, c fique dentre os dois\n escolha:");

    scanf("%hd", &i);

    switch (i)
  {
    case 1:
        printf("menor: %f \nmédio: %f \nmaior: %f", men, med, mai);
        break;
    case 2:
        printf("maior: %f \nmédio: %f \nmenor: %f", mai, med, men);
        break;
    case 3:
        printf("médio: %f \nmaior: %f \n menor: %f", med, mai, men);
        break;
    default:
        printf("opção invalida!");
    }
}

8 -
#include <stdio.h>

    void main()
{
    int a, b, c, mai, med, men;
    printf("Digite tres valores:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && b > c)
    {
        mai = a;
        med = b;
        men = c;
    }
    else if (a > c && c > b)
    {
        mai = a;
        med = c;
        men = b;
    }
    else if (b > a && a > c)
    {
        mai = b;
        med = a;
        men = c;
    }
    else if (b > c && c > a)
    {
        mai = b;
        med = c;
        men = a;
    }
    else if (c > b && b > a)
    {
        mai = c;
        med = b;
        men = a;
    }
    else if (c > a && a > b)
    {
        mai = c;
        med = a;
        men = b;
    }
    printf("maior: %d \nmédio: %d \nmenor: %d", mai, med, men);
}

9 -

#include <stdio.h>

    void main()
{

    short int ano, meses, dias;

    printf("Digite sua idade em anos, meses e dias:\n");

    scanf("%hd %hd %hd", &ano, &meses, &dias);

    printf("sua idade em dias é: %hd", dias);
}

10 -
#include <stdio.h>
#include <math.h>
    void main()
{

    short int ano, dias;
    float meses;

    printf("Digite sua idade em dias: ");
    scanf("%hd", &dias);
    ano = dias / 365;
    meses = dias / 30.417;
    printf("sua idade em dias, meses e anos são\n Dias: %hd\n Meses: %.0f\n Anos: %hd", dias, round(meses), ano);
}
