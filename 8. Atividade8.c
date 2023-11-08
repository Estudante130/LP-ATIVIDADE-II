#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero;

    printf("Digite um número: \n");
    scanf("%d", &numero);

    if (numero < 0)
    {
        printf("Digite um número positivo: \n");
    }
    else
    {
        printf("Contagem regressiva a partir de %d: \n", numero);

        while (numero >= 0)
        {
            switch (numero)
            {
            case 0:
                printf("Zero! \n");
                break;
            case 1:
                printf("Esse número é impar: 1 \n");
                break;
            default:
                if (numero % 2 == 0)
                {
                    printf("Esse número é par: %d \n", numero);
                }
                else
                {
                    printf("Esse número é ímpar: %d \n", numero);
                }
                break;
            }
            numero--;
        }
    }

    return 0;
}
