#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
    int n;
    int komenda;
    printf("Wybierz:\n");
    printf("----------------------------------------------\n");
    printf("[0] Zamknij program\n");
    printf("[1] Podaj n-ty wyraz ciagu\n");
    printf("[2] Policz tylko n-ty wyraz \n");
    printf("[3] Policz i pokarz n wyrazow tego ciagu\n");
    printf("----------------------------------------------\n");

    while(1)
    {
         printf("Wybrana komenda: ");
         scanf("%d", &komenda);
         printf("\n");
         switch (komenda)
         {
             case 0: return 0;
             case 1:
                     printf("Podaj n-ty wyraz ciagu: ");
                     scanf("%d", &n);
                     printf("\n");
                     if (n < 0)
                     {
                        printf("Bledne n! - n ma nalezec do liczb naturalnych\n");
                        return 0;
                     }
                     break;
             case 2: printf("n-ty wyraz ciagu obliczony rekurencyjnie: %d\n", rekurencja(n));
                     printf("n-ty wyraz ciagu obliczony iteracyjnie: %d\n\n", iterencja(n)); break;

             case 3: printf("n wyrazow tego ciagu obliczony rekurencyjnie: \n\n");
                     tablicaRek (n);
                     printf("\n\n");
                     printf("n wyrazow tego ciagu obliczony iteracyjnie: \n\n");
                     tablicaIter (n);
                     printf("\n\n"); break;
         }

    }
    return 0;
}
