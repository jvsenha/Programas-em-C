#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL, "");
    char nome[50];
    int vendas;
    float comissao, salario;
    const double SM = 954.00;
    printf("Digite seu nome: ");
    scanf("%s",&nome);
    printf("O valor do Salário Mínimo é = %f", SM);
    printf("\nValor total de vendas efetuadas no mês: ");
    scanf("%d",&vendas);
    comissao = vendas * 0.15;
    salario = comissao + SM;
    printf("\n\nO vendedor(a) %s recebeu no final do mês o sálario = %f\n\n", nome, salario);
}
