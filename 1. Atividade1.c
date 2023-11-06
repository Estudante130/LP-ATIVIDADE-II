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
        printf("O clima de hoje está ensolarado! \n");
    }
    else if (grausCelsius <= 15)
    {
        printf("O clima de hoje está chuvoso! \n");
    }
    else
    {
        printf("O clima de hoje está nublado! \n");
    }

    return 0;
}