#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int menu;

    printf("MENU INICIAL \n");
    printf("1. NOVO JOGO \n");
    printf("2. CARREGAR JOGO \n");
    printf("3. CONFIGURAÇÕES \n");
    printf("\n");

    printf("Escolha uma opção: \n");
    scanf("%d", &menu);

    system("cls || clear");

    switch (menu)
    {
    case 1:
        printf("Opção selecionada: NOVO JOGO. \n");
        printf("Iniciando um novo jogo...");
        break;

    case 2:
        printf("Opção selecionada: CARREGAR JOGO. \n");
        printf("Carregando jogos antigos... \n");
        break;

    case 3:
        printf("Opção selecionada: CONFIGURAÇÕES \n");
        printf("Carregando configurações do jogo... \n");
        break;

    default:
        printf("Opção inválida, tente novamente. \n");
    }

    return 0;
}
