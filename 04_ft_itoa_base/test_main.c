/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbehm <bbehm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 11:46:41 by bbehm             #+#    #+#             */
/*   Updated: 2020/07/07 11:46:42 by bbehm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa_base(10, 4));
	printf("%s\n", ft_itoa_base(10, 2));
	printf("%s\n", ft_itoa_base(10, 16));
	printf("%s\n", ft_itoa_base(10, 8));
	printf("%s\n", ft_itoa_base(-10, 10));
	return (0);
}