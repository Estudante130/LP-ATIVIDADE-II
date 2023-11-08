#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
int numeroUm;
int numeroDois;

printf("Digite o primeiro número: \n");
scanf("%d", &numeroUm);

system("cls || clear");

printf("Digite o segundo número: \n");
scanf("%d", &numeroDois); 

system("cls || clear");

if (numeroUm > numeroDois) {
    printf("O maior número é: %d", numeroUm);
}
else {
    printf("O maior número é: %d", numeroDois);
}

    return 0;
}
