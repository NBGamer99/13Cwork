/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:05:41 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/23 22:20:32 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char str)
{
	write(1, &str, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ulticheck(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i] != '\0')
	{
		j = 0;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (j < i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (ft_strlen(base));
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	l;

	l = nbr;
	len = ulticheck(base);
	if (len != 0)
	{
		if (nbr < 0)
		{
			put_char('-');
			l = -l;
			ft_putnbr_base((l / len), base);
			ft_putnbr_base((l % len), base);
		}
		else if (nbr / len == 0)
		{
			put_char(base[nbr % len]);
		}
		else if (nbr / len != 0)
		{
			ft_putnbr_base(nbr / len, base);
			put_char(base[nbr % len]);
		}
	}
}

int	main(void)
{
	ft_putnbr_base(-2, "01");
}
