#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 250

struct dados
{
    char nome[200], cargo[200];
    float salario;
};

float media(struct dados funcionario[])
{
    int i, j;
    float soma, resultado;

    for (j = 0; j < TAM; j++)
    {
        if (strcmp(funcionario[i].cargo, "Desenvolvedor") == 0)
        {
            j++;
            soma += funcionario[i].salario;
        }
    }
    resultado = soma / (float)j;
    return resultado;
}

int main()
{

    int opcao, i;
    
    struct dados funcionario[TAM];

    do
    {
        printf("APP \n");
        printf(" 1 - ADICIONE INFO\n");
        printf(" 2 - EXIBIR\n");
        printf(" 3 - SAIR \n");
        printf("RESPOSTA: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            fflush(stdin);

            printf("NOME DO %dº funcionário: ", i + 1);
            gets(funcionario[i].nome);

            printf("NOME DO CARGO: ");
            gets(funcionario[i].cargo);

            printf("VALOR DO SALARIO: ");
            scanf("%f", &funcionario[i].salario);

            system("cls||clear");

            break;
        case 2:
            printf("MEDIA SALARIAL: R$ %.2f\n", media(funcionario));
            break;
        }

    } while (opcao != 3);

    return 0;
}