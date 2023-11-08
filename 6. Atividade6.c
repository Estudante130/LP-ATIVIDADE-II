#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int codigo;

    printf("Insira o c�digo do produto desejado: Para Camiseta - 1, para Cal�a - 2, para Sapato - 3. \n");
        scanf("%d", &codigo);

system("cls || clear");

    if (codigo == 1)
    {
        printf("Voc� escolheu o produto Camiseta. A Camiseta est� custando R$250,00. \n");
    }
    else if (codigo == 2)
    {
        printf("Voc� escolheu o produto Cal�a. A Cal�a est� custando R$ 350,00. \n");
    }
    else if (codigo == 3)
    {
        printf("Voc� escolheu o produto Sapato. O Sapato est� custando R$ 500,00. \n");
    } 
    else
    {
         printf ("O produto que voc� escolheu n�o est� dispon�vel. \n");
    }

    return 0;
}
