/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:18:39 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/11 17:48:47 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_combn(int n)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 8)
	{
		j = i + 1;
		while (j <= 9)
		{
			ft_putchar(' ');
			ft_putchar('0' + i);
			ft_putchar('0' + j);
			ft_putchar(',');
			j++;
		}
		i++;
	}
}
