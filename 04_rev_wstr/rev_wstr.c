/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbehm <bbehm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 16:58:37 by bbehm             #+#    #+#             */
/*   Updated: 2020/07/06 17:14:16 by bbehm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		str_len(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

int		is_white_space(char c)
{
	return (c == ' ' || c == '\t');
}

void	rev_wstr(char *str)
{
	int start;
	int end;
	int moving;

	start = str_len(str) - 1;
	end = start;
	moving = start;
	while (start >= 0)
	{
		end = start;
		moving = start;
		while (start >= 0 && !is_white_space(str[start]))
			start--;
		start++;
		moving = start;
		while (moving <= end)
		{
			write(1, &str[moving], 1);
			moving++;
		}
		if (start > 0)
			write(1, " ", 1);
		start = start - 2;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}