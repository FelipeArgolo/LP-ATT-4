#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

struct dados_produto
{
    char nome[200];
    float preco;
    int estoque;
};

void atualizarEstoque(int estoque, float preco, int quantidadeProduto)
{
    int estoqueAtualizado;
    float precoAtualizado;
    estoqueAtualizado = estoque - quantidadeProduto;
    precoAtualizado =  preco * estoqueAtualizado;
    printf("ESTOQUE ATUAL: %d \n",estoqueAtualizado);
    printf("PRECO TOTAL EM ESTOQUE: %.1f \n",precoAtualizado);
}

int main()
{
    int opcao, escolha, quantidadeProduto;
    float produtoValor;
    char produtoNome[200];

    struct dados_produto produto;

    printf("DESEJA REGISTRA SEU PRODUTO?\n");
    printf("1 - SIM.\n");
    printf("2 - NAO.\n");
    scanf("%i", &escolha);

    system("cls||clear");

    switch (escolha)
    {
    case 1:

        fflush(stdin);
        printf("REGISTRE SEU PRODUTO AQUI.\n");
        printf("NOME: ");
        gets(produto.nome);

        printf("PRECO: ");
        scanf("%f", &produto.preco);

        fflush(stdin);

        printf("QUANTIDADE DO ESTOQUE: ");
        scanf("%i", &produto.estoque);

        printf("REGISTRO REALIZADO!");

        system("cls||clear");

        break;

    default:
        break;
    }

    do
    {
        printf("LOJA\n");
        printf("1 - REALIZAR COMPRA\n");
        printf("2 - CONSULTAR ESTOQUE\n");
        printf("3 - SAIR DO PROGRAMA.\n");
        printf("RESPOSTA: ");
        scanf("%i", &opcao);

        system("cls||clear");

        fflush(stdin);

        switch (opcao)
        {
        case 1:
            fflush(stdin);

            printf("NOME DO PRODUTO: \n");
            gets(produtoNome);

            printf("DIGITE O VALOR: ");
            scanf("%f", &produtoValor);

            printf("QUANTIDADE DESEJADA: ");
            scanf("%d", &quantidadeProduto);

            if (quantidadeProduto <= produto.estoque)
            {
                printf("COMPRA REALIZADA!\n");
            }
            else
            {
                printf("SEM ESTOQUE.\n");
            }

            break;

        case 2:

            printf("PRODUTO EM ESTOQUE.");
            printf("\n");
            printf("NOME: %s \n", produto.nome);
            atualizarEstoque(produto.estoque, produto.preco, quantidadeProduto);

            break;

        default:
            break;
        }

    } while (opcao != 3);

    return 0;
}