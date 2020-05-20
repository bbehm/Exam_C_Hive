#include <stdio.h>

char    *ft_itoa(int nb);

int     main(void)
{
    printf("%s\n", ft_itoa(1234567));
    printf("%s\n", ft_itoa(0));
    printf("%s\n", ft_itoa(-3456));
    printf("%s\n", ft_itoa(2147483647));
    printf("%s\n", ft_itoa(-2147483648));
    return (0);
}