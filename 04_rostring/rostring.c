#include <unistd.h>

int     ft_is_blank(char c)
{
    if (c == ' ' || c == '\t')
        return (1);
    return (0);
}
void    rostring(char *str)
{
    int i;
    int len;

    i = 0;
    len = 0;
    while (str[i])
    {
        while (ft_is_blank(str[i]))
            i++;
        if (str[i] && !ft_is_blank(str[i]))
        {
            if (len == 0)
                while (str[i] && !ft_is_blank(str[i++]))
                    len++;
            else
            {
                while (str[i] && !ft_is_blank(str[i]) && write(1, &str[i++], 1));
                write(1, " ", 1);
            }
        }
    }
    i = 0;
    while (ft_is_blank(str[i]))
        i++;
    while (len--)
        write(1, &str[i++], 1);
}

int main(int argc, char **argv)
{
    if (argc > 1 && *argv[1])
        rostring(argv[1]);
    write(1, "\n", 1);
    return (0);
}