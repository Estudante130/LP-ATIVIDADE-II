#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "portuguese"); 
    int grausCelsius;

    printf("Por favor digite a temperatura em Graus Celsius: \n");
    scanf("%d", &grausCelsius);

    if (grausCelsius >= 25)
    {
        printf("O clima de hoje est� ensolarado! \n");
    }
    else if (grausCelsius <= 15)
    {
        printf("O clima de hoje est� chuvoso! \n");
    }
    else
    {
        printf("O clima de hoje est� nublado! \n");
    }

    return 0;
}