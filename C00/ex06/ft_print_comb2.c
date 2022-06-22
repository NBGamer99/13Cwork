/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:08:11 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/10 00:56:30 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar('0' + (i / 10));
			ft_putchar('0' + (i % 10));
			ft_putchar(' ');
			ft_putchar('0' + (j / 10));
			ft_putchar('0' + (j % 10));
			if (j != 99 || i != 98)
				write (1, ", ", 2);
			j++;
		}
		i++;
	}
}
