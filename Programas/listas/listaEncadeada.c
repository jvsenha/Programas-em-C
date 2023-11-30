#include <stdlib.h>
#include <stdio.h>

struct NodoCarro // declara a struct do NODO
{
    int Qtd;
    int Vendido;
    struct NodoCarro *elo;
};

typedef struct NodoCarro NodoCarro; // define o nodo como um tipo

// declara as fuçoes que vão ser usadas
int menu(void);                                                    // devolve inteiro e recebe void
int empilhar(NodoCarro **pontLista, int DadoQtd, int DadoVendido); // devolve inteiro e recebe (ponteiro duplo, int e int)
void desempilhar(NodoCarro **pontLista);
void exibir(NodoCarro *pontLista);
void primeiro(NodoCarro *pontLista);
void qtdElementos(NodoCarro *pontLista);

int main()
{
    NodoCarro *pontLista; // define um ponteiro do tipo do nodo

    int DadoQtd = 0, opc = 0, retorno, DadoVendido = 0;
    pontLista = NULL; // ponteiro apontado para NULL

    do
    {
        opc = menu();
        switch (opc)
        {
        case 1:
            printf("\nInformacoes\n\n");
            printf("Qual a quantidade: \n");
            scanf("%d", &DadoQtd);
            printf("Qual o Vendido: \n");
            scanf("%d", &DadoVendido);
            retorno = empilhar(&pontLista, DadoQtd, DadoVendido);
            if (retorno == 0)
                printf("\nInserido com sucesso!\n\n\n");
            else
                printf("\nErro!!\n\n");
            break;
        case 2:
            desempilhar(&pontLista);
            break;
        case 3:
            qtdElementos(pontLista);
            break;
        case 4:
            primeiro(pontLista);
            break;
        case 5:
            exibir(pontLista);
            break;
        default:
            printf("\nEssa opcao nao existe!\n\n");
        }
    } while (opc != 0);
    return 0;
}
int menu(void)
{
    int opc;
    printf("\nMenu\n");
    printf("(1) Empilhar\n");
    printf("(2) Desempilhar\n");
    printf("(3) Qtd de Elementos\n");
    printf("(4) Mostra Primeiro\n");
    printf("(5) Mostrar tudo\n");
    printf("(0) Sair\n");
    printf("Escolha: ");
    scanf("%d", &opc);
    return opc;
}

int empilhar(NodoCarro **pontLista, int DadoQtd, int DadoVendido)
{
    // cria um novo ponteiro e atribuiu um espaço em memoria
    // que é alocado dinamicamente atravéz da função malloc()
    NodoCarro *pontNovo = (NodoCarro *)malloc(sizeof(NodoCarro));

    if (pontNovo == NULL)
        return 1; //erro pq o ponteiro do nodo novo tbm a ponto para NULL
    else
    {
        //define os valores do novo ponteiro
        pontNovo->Qtd = DadoQtd;
        pontNovo->Vendido = DadoVendido;
        pontNovo->elo = *pontLista;// novo elo passa a ser o atual ponteiro da lista 
        *pontLista = pontNovo;//transforma o ponteiro da lista no nodo adicionado empilhando-lhes
        return 0;
    }
}

void desempilhar(NodoCarro **pontLista)
{
    if (*pontLista == NULL)
    {
        printf("\nLista vazia!\n");
    }
    else
    {
        NodoCarro *auxP = *pontLista; //atribui o auxiliar com o valor do ponteiro da lista
        *pontLista = auxP->elo;//atribui o ponteiro da lista como o Elo do Auxiliar
        printf("\nRemovido com sucesso!\n");
    }
}

void exibir(NodoCarro *pontLista){
    NodoCarro *auxP; //declara um variavel auxliar
    for (auxP = pontLista; auxP != NULL; auxP = auxP->elo) // para auxP de(=) pontLista atribuindo elo ao auxiliar até != NULL faça
    {
        printf("\n|%d\t|%d\t|\n", auxP->Qtd, auxP->Vendido); //mostrar tabela
    }
}

void primeiro(NodoCarro *pontLista){
    NodoCarro *auxP;
    auxP = pontLista;
    printf("\n|%d\t|%d\t|\n", auxP->Qtd, auxP->Vendido);
}

void qtdElementos(NodoCarro *pontLista){
    NodoCarro *auxP;
    int count = 0;
    for (auxP = pontLista; auxP != NULL; auxP = auxP->elo)
        count += 1;
    printf("\nquantidade de items: %d\n", count);
}