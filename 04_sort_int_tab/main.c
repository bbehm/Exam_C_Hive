#include <stdio.h>

void    sort_int_tab(int *tab, unsigned int size);

int     main(void)
{
    int tab[] = { 1, 3, 6, 5, -3, 0, 6, 7, 2344 };
    unsigned int size;
    unsigned int i;

    size = 9;
    sort_int_tab(tab, size);
    i = 0;
    while (i < size)
    {
        printf("%d, ", tab[i]);
        i++;
    }
    printf("\n");
    return (0);
}