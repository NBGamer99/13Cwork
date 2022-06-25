/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 23:37:47 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/25 13:42:14 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*str;

	i = ac - 1;
	if (ac >= 2)
	{
		while (i >= 1)
		{
			str = &av[i][0];
			j = 0;
			while (str[j] != '\0')
			{
				ft_putchar(str[j]);
				j++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
}
