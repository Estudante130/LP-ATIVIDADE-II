#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "portuguese");
float valor;
char dia;
float desconto = 0.0; 

printf("Qual o valor da compra?: R$ \n");
scanf("%f", &valor);

fflush(stdin);

printf("Digite D caso tenha comprado em um dia de segunda à sexta, digite F caso tenha comprado em um final de semana: \n");
scanf("%c", &dia);

if (valor >= 100.0) {
    if (dia == 'D' || dia == 'd') {
        desconto = valor * 0.10;
    } else if (dia == 'F' || dia == 'f') {
        desconto = valor * 0.15;
    }
}

valor -= desconto;
printf("Valor final: R$%.2f \n", valor);

    return 0;
}