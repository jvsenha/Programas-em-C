#include <stdio.h>
#include <stdlib.h>
#define Num 3
//LL= Lista Linear
//IA= Inici do Arranjo
//FA= Final do Arranjo
//IL= Inicio da lista 
//FL= Final  da lista 
//infoCarro.Varialvel, é usado para acessar um informação do nodo

struct NodoCarro // declara a struct do NODO
{
    char Modelo[10];
    int ano;
    char placa[7];
};

typedef struct NodoCarro NodoCarro; // define o nodo como um tipo

int menu();
int inserirInicio(NodoCarro LL[], int IA, int FA, int *IL, int *FL, NodoCarro infoCarro);
int removerFinal(int *IL, int *FL);
int qtdElementos(int *IL, int *FL);
void mostrarUltimo(NodoCarro LL[], int IA, int IL);
void mostraPrimeiro(NodoCarro LL[], int IA, int IL, int FL);
int mostrarTudo(NodoCarro LL[], int IA, int FA, int IL, int FL);

int main()
{
    NodoCarro LL[Num], infoCarro;// declara a a LL e as informaçoes como do tipo do NODO
    int IA = 0, FA = Num - 1, IL = -1, FL = -1, opc;

    do
    {
        opc = menu();
        switch (opc)
        {
        case 1:
            printf("\nInformaçoes\n\n");

            printf("Qual o modelo: \n");
            scanf("%s", infoCarro.Modelo);

            printf("Qual o ano: \n");
            scanf("%d", &infoCarro.ano);

            printf("Qual a placa: \n");
            scanf("%s", infoCarro.placa);

            if (!inserirInicio(LL, IA, FA, &IL, &FL, infoCarro))
                printf("\n\n inserido com sucesso!\n\n\n");
            else
                printf("\n\n lista cheia!!! \n\n");
            break;

        case 2:
            printf("\n\n---removendo---\n\n");

            if (!removerFinal(&IL, &FL))
                printf("\n\nremovido com sucesso\n\n");
            else
                printf("\n\nlista vazia!!\n\n");
            break;
        case 3:
            printf("Quantidade de elementos: %d \n", qtdElementos(&IL, &FL));
            break;
        case 4:
            mostrarUltimo(LL, IA, IL);
            break;
        case 5:
            
            mostraPrimeiro(LL, IA, IL, FL);
            break;
        case 6:
            printf("Lista:");
            mostrarTudo(LL, IA, FA, IL, FL);
            break;
        case 0:
            printf("Até mais...\n\n\n\n");
            break;
        default:
            printf("\n\nEssa opcão não existe!\n\n");
        }
    } while (opc != 0);
}

int menu()
{
    int opc;
    printf("Menu \n");
    printf("(1) Inserir no inicio \n");
    printf("(2) Remover no Final \n");
    printf("(3) Qtd de Elementos \n");
    printf("(4) Mostra  ultimo\n");
    printf("(5) Mostrar  Primeiro \n");
    printf("(6) Mostrar tudo \n");
    printf("(0) Sair \n");
    printf("Escolha: ");
    scanf("%d", &opc);
    return opc;
}

int inserirInicio(NodoCarro LL[], int IA, int FA, int *IL, int *FL, NodoCarro infoCarro)
{

    if (IA == *IL && FA == *FL)
        return 1;//verificar se a lista esta cheia
    else
    {
        if (*IL == -1)//verificar se esta vazia, -1 por que o IA é zero
            *IL = *FL = IA;
        else if (*IL > IA)
            *IL -= 1; //como será inserido no inicio
        else
        {
            for (int i = *FL; i >= *IL; i--)
                LL[i + 1] = LL[i];
            *FL += 1;
        }
        LL[*IL] = infoCarro;
        return 0;
    }
}

int removerFinal(int *IL, int *FL)
{
    if (*IL == -1)
    {
        return 1;
    }
    else if (*IL == *FL)
    {
        *IL -= 1;
        *FL -= 1;
    }
    else
        *FL -= 1;
    return 0;
}
int qtdElementos(int *IL, int *FL)
{
    int cont = 0;
    for (int i = 0; i <= *FL; i++)
    {
        cont += 1;
    }
    return cont;
}

void mostrarUltimo(NodoCarro LL[], int IA, int IL){
    if (IL < IA)
        printf("\n\nlista vazia!!\n\n");
    else
    {
        printf("\n\n %s- %s - %d \n\n", LL[IL].Modelo, LL[IL].placa, LL[IL].ano);
    }
}

void mostraPrimeiro(NodoCarro LL[], int IA, int IL, int FL){
    if (IL < IA)
        printf("\n\nlista vazia!!\n\n");
    else
    {
        printf("\n\n %s- %s - %d \n\n", LL[FL].Modelo, LL[FL].placa, LL[FL].ano);
    }
}

int mostrarTudo(NodoCarro LL[], int IA, int FA, int IL, int FL)
{
    printf("\n\n");
    for (int i = IA; i <= FA; i++)
    {
        if (i >= IL && i <= FL)
            printf("  |%s- %s - %d|  ", LL[i].Modelo, LL[i].placa, LL[i].ano);
        else
            printf("  |_____|  ");
    }
    printf("\n\n");
    return 0;
}
