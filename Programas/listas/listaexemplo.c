#include <stdio.h>
#include <stdio.h>
#define N 11

struct tipoNodo{
    char nome[10];
    int numero;
    int idade;
};

typedef struct tipoNodo tipoNodo;


int menu()
{
    int opcao;
    printf("Menu\n");
    printf("[1] Inserir\n");
    printf("[2] Remover\n");
    printf("[3] Quantidade de elementos\n");
    printf("[4] Mostrar quem é o primeiro\n");
    printf("[5] Mostrar quem é o último\n");
    printf("[6] Mostrar fila\n");
    printf("[0] Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    return opcao;
}

int inserirInicio(tipoNodo LL[], int IA, int FA, int *IL, int *FL,
tipoNodo dadosFut){
    if (IA == *IL && FA == *FL)
        return 1; // Lista Cheia
    else{
        if (*IL == -1)
            *IL = *FL = IA;
        else if (*IL > IA)
            *IL = *IL-1;
        else
        {
            for(int i = *FL; i >= *IL; i--)
                LL[i+1] = LL[i];
            *FL = *FL+1;
        }
        LL[*IL] = dadosFut;
        return 0;
    }
    
}

int removerDados(int IA, int *IL, int *FL){
    if(*IL == -1 && *FL == -1)
        return 1;//Lista Vazia
    else if (*IL == IA && *FL == IA){
        *FL -= 1;
        *IL = *FL;
        return 0;
    }else if(*IL == IA && *FL != IA){
        *FL -= 1;
        return 0;
    }
        
}

int quantNodo(int IA, int FL, int *IL){
    int cont = 0;
    if(*IL == -1){
        printf("Quantidade de Elementos: %d\n\n",cont);
        return 0;
    } else {
        for(int i = 0; i <= FL; i++){
            cont += 1;
        }
        printf("Quantidade de Elementos: %d\n\n",cont);
        return 0;
    }
}


int mstrPrimeiro(tipoNodo LL[], int *IL, int IA){
    if(*IL == -1){
        printf("\n\nLista Vazia!!\n\n");
        return 1;
    }else if (*IL == IA){
            printf("\nNome \tNumero \tIdade");
            printf("\n%s \t%d \t%d\n",LL[IA].nome, LL[IA].numero, LL[IA].idade);
            return 0;
    }
}

int mstrUltimo(tipoNodo LL[], int FL){
    if(FL == -1){
        printf("\n\nLista Vazia!!\n\n");
        return 1;
    }else{
            printf("\nNome \tNumero \tIdade");
            printf("\n%s \t%d \t%d\n",LL[FL].nome, LL[FL].numero, LL[FL].idade);
            return 0;
    }
}

int mostrarDados(tipoNodo LL[], int IA, int FA, int IL, int FL){
    for(int i=IA; i<=FA; i++){
        if(i>=IL && i<=FL){
            printf("\nNome \tNumero \tIdade");
            printf("\n%s \t%d \t%d\n",LL[i].nome, LL[i].numero, LL[i].idade);
        }else
            printf("\n---\n\n");
    }
    return 0;
}

int main()
{
    //LL - Lista Linear
    tipoNodo LL[N], dadosFut;
    //IA - Inicio do Arranjo
    //FA - Final do Arranjo
    //IL - Inicio Lista
    //FL - Final Lista
    int IA=0, FA=N-1, IL = -1, FL = -1, opcao;
   do{
       opcao = menu();
    
       switch(opcao){
           case 0:
           printf("\nMuito Obrigado. Até Logo!!\n");
           break;
           
           case 1:
           printf("\n...Insira os dados...\n");
           printf("Qual Jogador(nome): \n");
           scanf("%s",dadosFut.nome);
           printf("Qual número da camiseta: \n");
           scanf("%d",&dadosFut.numero);
           printf("Qual idade: \n");
           scanf("%d",&dadosFut.idade);
           if(!inserirInicio(LL, IA, FA, &IL, &FL, dadosFut))
               printf("\nInserido!!!\n\n");
           else
               printf("\nLista Cheia!!!\n\n");
           break;
           
           case 2:
           printf("\n...Removendo...");
           if(!removerDados(IA, &IL, &FL))
               printf("\nRemovido!!!\n\n");
           else
               printf("\nLista Vazia!!!\n\n");
           break;
           
           case 3:
            printf("\n...Mostrar Fila...\n");
            quantNodo(IA, FL, &IL);
            break;
            
            case 4:
            printf("\n...Mostrar Primeiro...\n");
            mstrPrimeiro(LL, &IL, IA);
            break;
            
            case 5:
            printf("\n...Mostrar Último...\n");
            mstrUltimo(LL, FL);
            break;
           
            case 6:
            printf("\n...Mostrar Fila...\n");
            mostrarDados(LL, IA, FA, IL, FL);
            break;
            
            default:
            printf("\nOpção inválida!!!\n\n");
       }
   }while(opcao != 0);
}