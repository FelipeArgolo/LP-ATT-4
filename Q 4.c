#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

struct contaBancaria {
    char nome[200], numero[200], tipo[200];
    float saldo, transferencia, depositado;
};

float deposito (float valorInicial, float valorDeposito) {
    return valorInicial + valorDeposito;
}

float saque (float valorInicial, float valorSaque) {
    return valorInicial - valorSaque;
}

int main ( ) {

    int opcao;
    float depositoAtualizado, saqueAtualizado;
    struct contaBancaria dados;


    do {
        printf("O que você deseja fazer hoje?\n");
        printf("1 - Registrar conta nova\n");
        printf("2 - Depósito \n");
        printf("3 - Saque\n");
        printf("4 - Sair do programa\n");
        printf("Resposta: ");
        scanf("%d", &opcao);

        system("cls||clear");

        switch (opcao) {
        case 1:
            fflush(stdin);

            printf("NOME DO TITULAR: ");
            gets(dados.nome);

            printf("NUMERA DA CONTA: ");
            gets(dados.numero);

            printf("TIPO DE CONTA DESEJADA: ");
            gets(dados.tipo);

            printf("QUAL SALDO TERA NA CONTA: ");
            scanf("%f", &dados.saldo);

            break;
        
        case 2:
            printf("QUANTO VOCE DESEJA DEPOSITAR: ");
            scanf("%f", &dados.depositado);

            depositoAtualizado = deposito(dados.saldo, dados.depositado);

            printf("NOME DO TITULAR: %s\n", dados.nome);
            printf("NUMERO DA CONTA: %s\n", dados.numero);
            printf("TIPO DA CONTA: %s\n", dados.tipo);
            printf("SALDO PRE-DEPOSITO: %.2f\n", dados.saldo);
            printf("SALDO ATUAL DA CONTA: %.2f\n", depositoAtualizado);

            break;

        case 3:
            printf("QUANTO VOCE DESEJA SACAR: ");
            scanf("%f", &dados.transferencia);

            saqueAtualizado = saque(dados.saldo, dados.transferencia);

            printf("NOME DO TITULAR: %s\n", dados.nome);
            printf("NUMERO DA CONTA: %s\n", dados.numero);
            printf("TIPO DA CONTA: %s\n", dados.tipo);
            printf("SALDO PRE-SAQUE: %.2f\n", dados.saldo);
            printf("SALDO ATUAL DA CONTA: %.2f\n", saqueAtualizado);

            break;
        
        default:
            break;
        }
    } while (opcao != 0);

    return 0;
}