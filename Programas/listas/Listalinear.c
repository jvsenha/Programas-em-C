#include <stdio.h>
#include <stdlib.h>
#define Num 3

struct NodoCarro
{
    char Modelo[10];
    int ano;
    char placa[7];
};

typedef struct NodoCarro NodoCarro;

int menu();

int inserirInicio(NodoCarro LL[], int IA, int FA, int *IL, int *FL, NodoCarro infoCarro);

int removerFinal(int *IL, int *FL);
int qtdElementos(int *IL, int *FL);
void mostraPrimeiro(NodoCarro LL[], int IA, int IL);
void mostrarUltimo(NodoCarro LL[], int IA, int IL, int FL);
int mostrarTudo(NodoCarro LL[], int IA, int FA, int IL, int FL);

int main()
{
    NodoCarro LL[Num], infoCarro;
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
            mostraPrimeiro(LL, IA, IL);
            break;
        case 5:
            mostrarUltimo(LL, IA, IL, FL);
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
    printf("(4) Mostra Primeiro \n");
    printf("(5) Mostrar ultimo \n");
    printf("(6) Mostrar tudo \n");
    printf("(0) Sair \n");
    printf("Escolha: ");
    scanf("%d", &opc);
    return opc;
}

int inserirInicio(NodoCarro LL[], int IA, int FA, int *IL, int *FL, NodoCarro infoCarro)
{

    if (IA == *IL && FA == *FL)
        return 1;
    else
    {
        if (*IL == -1)
            *IL = *FL = IA;
        else if (*IL > IA)
            *IL -= 1;
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

void mostraPrimeiro(NodoCarro LL[], int IA, int IL)
{
    if (IL < IA)
        printf("\n\nlista vazia!!\n\n");
    else
    {
        printf("\n\n %s- %s - %d \n\n", LL[IL].Modelo, LL[IL].placa, LL[IL].ano);
    }
}

void mostrarUltimo(NodoCarro LL[], int IA, int IL, int FL)
{
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
