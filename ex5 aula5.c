#include <stdio.h>

int main() {
   int i, n;
   int soma = 0;
   printf("Digite um numero: ");
   scanf("%d", &n);
   for(i = 0; i <= n; i++)
   {
        soma += i;
   }
   printf("A soma dos numeros de 0 a %d eh %d\n", n, soma);
   return 0; // Correção: 'retrun' alterado para 'return'
}
