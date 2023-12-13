#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define TAM 5

struct alunos
{
    char nome[200];
    char dataDeNascimento[11];
};

float calcularMedia(float nota[])
{
    int i;
    float soma, media;
    for (i = 0; i < 2; i++)
    {
        soma += nota[i];
    }
    media = soma / 2;

    return media;
}

char *situacao(float media)
{
    char situacao[200];

    if (media > 7)
    {
        strcpy(situacao, "Aprovado");
    }
    else
    {
        strcpy(situacao, "Reprovado");
    }

    return situacao;
}

int main()
{
    float nota[2], mediaFinal;
    int i, j;

    struct alunos alunos[TAM];

    for (i = 0; i < TAM; i++)
    {
        printf("DIGITE SEU NOME: \n");
        gets(alunos[i].nome);

        printf("ANO DE NASCIMENTO: (DD/MM/AAAA)\n");
        gets(alunos[i].dataDeNascimento);

        for (j = 0; j < 2; j++)
        {
            printf("SUA %dª NOTA: \n", i + 1);
            scanf("%f", &nota[j]);
        }

        mediaFinal = calcularMedia(nota);

        printf("SUA MEDIA: %.1f \n ", mediaFinal);
        printf("SITUACAO: %s \n", situacao(mediaFinal));

        printf("\n");

        fflush(stdin);
    }

    return 0;
}