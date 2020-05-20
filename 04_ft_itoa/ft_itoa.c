#include <stdlib.h>

int     num_len(long int nb)
{
    int len;

    len = 0;
    if (nb < 0)
    {
        nb = nb * -1;
        len++;
    }
    while (nb > 0)
    {
        nb = nb / 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int nb)
{
    char        *str;
    long int    num;
    int         i;

    num = nb;
    i = num_len(num);
    if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
        return (NULL);
    str[i--] = '\0';
    if (num == 0)
    {
        str[0] = 48;
        return (str);
    }
    if (num < 0)
    {
        str[0] = '-';
        num = num * -1;
    }
    while (num > 0)
    {
        str[i] = 48 + (num % 10);
        num = num / 10;
        i--;
    }
    return (str);
}