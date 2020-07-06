/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbehm <bbehm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 18:10:15 by bbehm             #+#    #+#             */
/*   Updated: 2020/07/06 18:31:47 by bbehm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char	*make_malloc(char *str)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !ft_isspace(str[i]))
		i++;
	if (!(word = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (str[i] && !ft_isspace(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

int		count_words(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		while (*str && ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{
			count++;
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	return (count);
}

char	**ft_split(char *str)
{
	char	**array;
	int		i;

	if (!(array = (char **)malloc(sizeof(char *) * (count_words(str) + 1))))
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{
			array[i] = make_malloc(str);
			i++;
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	array[i] = NULL;
	return (array);
}
