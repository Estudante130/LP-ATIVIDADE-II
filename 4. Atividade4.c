#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
   int idade; 

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Acesso permitido. \n");
    }
    else 
    {
        printf("Acesso negado. \n");
    }

    return 0;
}