#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
   float numeroUm;
   float numeroDois;
   float resultado;
   char operacao;
   
   printf("Digite o primeiro número: \n");
   scanf("%f", &numeroUm);

   system("cls || clear"); 

   printf("Digite o segundo número: \n");
   scanf("%f", &numeroDois);

   system("cls || clear");
   fflush(stdin);

   printf("Qual operaÃ§Ã£o deseja realizar? Para adição digite +, para subtração digite -: \n");
   scanf("%c", &operacao);

   switch (operacao) {
    case '+':
    resultado = numeroUm + numeroDois;
    printf("Resultado da adição: %f \n", resultado);
    break;
    case '-': 
    resultado = numeroUm - numeroDois;
    printf("Resultado da subtração: %f \n", resultado);
    break;
    default:
    printf("Operação inválida \n");
    break;
   }

    return 0;
}
