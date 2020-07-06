// main for testing purposes

#include <stdio.h>
char    **ft_split(char *str);

int		main(void)
{
	char	**array;
	char *str = " Helllo I	\t	am  Bianca ";
	
	array = ft_split(str);
	printf("%s\n", array[0]);
	printf("%s\n", array[1]);
	printf("%s\n", array[2]);
	printf("%s\n", array[3]);
	return (0);
}