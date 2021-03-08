#include "modul_rekurencyjny.h"
#include "main.h"


int rekurencja(int n)
{
    if (n == 0) return 2;

    if (n % 2 != 0) return (rekurencja(n-1)*2);

    if (n % 2 == 0) return (rekurencja(n-1)+2);
}


int tablicaRek(int n)
{
    int *tab_malloc;
    tab_malloc = (int *)malloc(n*sizeof(int));

    for (int i = 0; i <= n; i++)
    {
        tab_malloc[i] = rekurencja(i);
    }
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", tab_malloc[i]);
    }
}

