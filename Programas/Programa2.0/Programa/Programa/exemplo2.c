#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL, "");
    char nome[50];
    float n1, n2, n3, n4, med;
    printf("Digite o nome do aluno: ");
    scanf("%s",nome);
    printf("Digite a 1� nota: ");
    scanf("%f", &n1);
    printf("Digite a 2� nota: ");
    scanf("%f", &n2);
    printf("Digite a 3� nota: ");
    scanf("%f", &n3);
    printf("Digite a 4� nota: ");
    scanf("%f", &n4);
    med = (n1+n2+n3+n4)/4;
    if (med>=6){
        printf(" %s sua media foi %.2f e voc� foi aprovado", nome, med);
    }else if (med<6 && med >= 3){
        printf(" %s sua media foi %.2f e voc� estade recupera��o", nome, med);
    }else{
        printf(" %s sua media foi %.2f e voc� estade reprovado", nome, med);
    }


}
