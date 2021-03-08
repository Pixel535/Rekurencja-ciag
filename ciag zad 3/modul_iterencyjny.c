#include "modul_iterencyjny.h"
#include "main.h"


int iterencja(int n)
{
    int wynik = 2;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            wynik = wynik * 2;
        }
        else if (i % 2 == 0)
        {
            wynik = wynik + 2;
        }
    }
    return wynik;

}

int tablicaIter(int n)
{
    int *tab_malloc;
    tab_malloc = (int *)malloc(n*sizeof(int));

    for (int i = 0; i <= n; i++)
    {
        tab_malloc[i] = iterencja(i);
    }
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", tab_malloc[i]);
    }
}

