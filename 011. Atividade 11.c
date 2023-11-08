#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int codigo = 12345;
    int codigoDigitado;

    while (1){
        printf("Digite o seu código: \n");
        scanf("%d", &codigoDigitado);

        if (codigoDigitado == codigo) {
            printf("Bem-vindo! \n");
            break;
        }
        else {
            system("cls || clear");
            printf("Por favor, tente novamente. \n");
        }
        }

    return 0;
}
