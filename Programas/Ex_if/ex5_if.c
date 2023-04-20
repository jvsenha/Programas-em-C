#include <stdio.h>

 

int main()
{
    float idade, sal, tempo;
    printf("Digite seu salario:");
    scanf("%f", &sal);
    printf("Digite seu tempo de serviço (anos):");
    scanf("%f", &tempo);
    printf("Digite a sua idade:");
    scanf("%f", &idade);

    if(sal < 4000 && tempo >= 3 && idade >30){
        printf("Receberá ajuste");
    }
    else{
        printf("Não receberá ajuste");
    }
    return 0;
}
