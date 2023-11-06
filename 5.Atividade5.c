#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "portuguese");
    int idioma;

    printf("Digite o idioma da sua escolha. Para Inglês - 1, para Espanhol - 2, para Francês - 3: \n");
    scanf("%d", &idioma);

system("cls || clear"); 

    if (idioma == 1)
    {
        printf("Welcome! \n");
    }
    else if (idioma == 2)
    {
        printf("Bienvenido \n");
    }
    else if (idioma == 3)
    {
        printf("Accueillir! \n");
    }
    else
    {
        printf("Idioma nÃo encontrado. \n");
    }

    return 0;
}