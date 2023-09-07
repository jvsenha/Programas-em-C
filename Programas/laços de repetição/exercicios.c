
#include <stdio.h>

 /* exercicio 1
    void main ()
    {
    int cod = 1;
    float rest, n1, n2, n3;
    printf ("qual o codigo do aluno: ");
    scanf ("%d", &cod);
    while (cod != 0)
    {

    printf ("Digite suas 3 notas:\n");
    scanf ("%g %g %g", &n1, &n2, &n3);
    rest = (n1 + n2 + n3) / 3;
    printf (" a media do aluno C): %g \n", rest);
    printf ("qual o codigo do aluno: ");
    scanf ("%d", &cod);
    }
    }
  */

/*
void main()
{
    int i=1, num;
    float rest,n1,n2,n3;
    while(i!=0){
        printf("Digite suas 3 notas: \n");
        scanf("%g %g %g", &n1,&n2,&n3);
        num=n1+n2+n3;
        num%=2;
        if(num==0){
            rest=(n1+n2+n3)/3;
             printf ("A media do aluno é: %g \n", rest);
        }else{
            printf("Não é possivel realizar a média. \n");
        }
        printf("Deseja continuar:\n 1-Sim \n 0-Não \n Escolha:");
        scanf("%d", &i);
    }
}
*/

/*
exercicio 3 
void main ()
{
  int num;
  printf ("Digite um numero: ");
      scanf ("%d", &num);
  do{
      if (num > 0 && num <= 25){
	  printf ("esta entre 0 e 25 \n");
	}
      else if (num >= 26 && num <= 50){
	  printf ("esta entre 26 e 50 \n");
	}
      else if (num >= 51 && num <= 75){
	  printf ("esta entre 51 e 75 \n");
	}
      else if (num >= 76 && num <= 100){
	  printf ("esta entre 76 e 100 \n");
	}else if(num>100){
	    printf("maior que 100 \n");
	}
	
	printf ("Digite um numero: ");
      scanf ("%d", &num);
      
    }while(num>0);
  }
*/

/*
exercicio 4
#include <stdio.h>

void main() {
    int i;
    float sal, som_sal= 0;
    int idade, maior_idade = 0, menor_idade = 100, sal_mlh= 0;
    char sexo;

    for (i = 1; i <= 5; i++) {
        printf("Informacões da pessoa %d:\n", i);

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo); 

        printf("Salário: ");
        scanf("%f", &sal);

        
        som_sal += sal;

      
        if (idade > maior_idade) {
            maior_idade = idade;
        }
        if (idade < menor_idade) {
            menor_idade = idade;
        }

        if (sexo == 'F' && sal <= 100.0) {
            sal_mlh++;
        }
    }

    
    float med_sal = som_sal / 15;

    printf("\nMC)dia de salário do grupo: R$%.2f\n", med_sal);
    printf("Maior idade do grupo: %d anos\n", maior_idade);
    printf("Menor idade do grupo: %d anos\n", menor_idade);
    printf("Quantidade de mulheres com salário até) R$100.00: %d\n", sal_mlh);

    
}
*/

/*
exercicio   5 
void main() {
    int i, idade, maior_idade=0, mlh;
    char sexo, olhos, cabelos;
    while(idade!=-1){
         printf("------------------------------------------------\n");
        printf("Informações da pessoa:\n");

        printf("Idade: ");
        scanf("%d", &idade);
        if(idade!=-1){
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo); 
        printf("Cor so olhos \n V-verde \n A-azul \n O-outro: ");
        scanf(" %c", &olhos); 
         printf("Cor so olhos \n P-preto \n L-loiro \n O-outro: ");
        scanf(" %c", &cabelos); 
        
        if (idade > maior_idade) {
            maior_idade = idade;
            }
        if (sexo == 'F' && olhos == 'V' && cabelos == 'L' && idade >=18 && idade<=35) {
            mlh++;
            }   
         }
    }
      printf("Maior idade ds habitantes: %d anos\n", maior_idade);
      printf("Mulheres com idade entre 18 e 35 anos com olhos verdes e cabelos louros: %d", mlh);
}
*/

 /* exercicio 6

    void main(){

    for(int i=1000; i <=1999; i++){
    int rest= i%11;
    if(rest==5){
    printf("%d \n", i);
    }
    }
    }

  */

/*
exercicio 7
void main ()
{
  int i;
  float sal, som_sal = 0, num_filho, som_fl = 0;
  int idade, maior_sal = 0, sal_mn = 0 ;


  while (sal >= 0){
      printf ("InformacC5es da pessoa %d:\n", i);
      printf ("Salario: ");
      scanf ("%f", &sal);
      
      if (sal > 0){
        som_sal += sal;
	  printf ("Numero de filhos: ");
	  scanf (" %f", &num_filho);
	 som_fl += num_filho;
	  if (sal > maior_sal){
	      maior_sal = sal;
	    }
     
	  if (sal <= 100.0){
	      sal_mn++;
	    }
	    i++;
	}

    }


  float med_sal = som_sal / i;
 float med_fl = som_fl / i;
  printf ("\nMC)dia de Salario do grupo: R$%.2f\n", med_sal);
   printf ("MC)dia Numero de filhos: %.2f \n", med_fl);
  printf ("Maior Salario: %d \n", maior_sal);
  printf ("pessoas com salC!rio atC) R$100,00: %d\n", sal_mn);


}
*/

/*
exercicio 8
 void main(){
     float som_cont = 0, med;
     int i=0;
     for(int cont=13; cont<=73; cont++){
         som_cont+=cont;
         i++;
     }
     med = som_cont / i;
     printf(" %.2f / %d \n", som_cont,i);
     printf("A mC)dia C): %.2f ", med);
 }
*/

/*
exercicio 9
 void main(){
     float rest;
     for(int cont=100; cont<=200; cont++){
         rest=cont%2;
         if(rest==1){
        printf("%d \n", cont);
     }
 
 
 }
 }
*/

/*
exercicio 10
void main(){
     int num, d=0, f=0;
     printf("------------------------------------------------ \n");
     for(int cont=0; cont<10; cont++){
         printf("Digite um valor: ");
         scanf("%d", &num);
         if(num>=10 && num<=20){
            d+=1;
         }else{
             f+=1;
         }
        }
        printf("------------------------------------------------ \n");
        printf("Dentro: %d \n", d);
        printf("Fora: %d \n", f);
 }
*/
