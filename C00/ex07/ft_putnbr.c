/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:56:06 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/22 15:16:22 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb / 10 == 0)
		ft_putchar((nb % 10) + '0');
	else if (nb / 10 != 0)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

int main()
{
	ft_putnbr(2147483647);
}
