void    swapper(int *tab, unsigned int old, unsigned int new)
{
    int tmp;

    tmp = tab[old];
    tab[old] = tab[new];
    tab[new] = tmp;
}

void    sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    
    i = 0;
    j = 0;
    if (size <= 1)
        return ;
    while (i < size)
    {
        j = 0;
        while (j < size - 1)
        {
            if (tab[j] > tab[j + 1])
                swapper(tab, j, j + 1);
            j++;
        }
        i++;
    }
}