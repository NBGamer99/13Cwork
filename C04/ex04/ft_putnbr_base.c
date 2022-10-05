/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:05:41 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/30 21:00:26 by ynabouzi         ###   ########.fr       */
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
		}
		if (l >= len)
		{
			ft_putnbr_base(l / len, base);
			ft_putnbr_base(l % len, base);
		}
		else
			put_char(base[l % len]);
	}
}

#include<stdio.h>
#include <limits.h>
int main()
{
	// int	nbr = 0;
	char base[]="01";

	//ft_putnbr_base(0,base);
	// while (nbr < 99)
	// {
	// 	//printf("\n%d  ===> \n", nbr);
	// 	ft_putnbr_base(nbr, base);
	// 	put_char('\n');
	// 	nbr++;
	// 	//printf("\n===========\n");
	// }
	//ft_putnbr_base(214748364,"01");
	int i = 0;
	while (i < 99)
	{
		// printf("\n  <====  %d",i);
		//printf("\n");
		ft_putnbr_base(i,base);
		//printf("\n");
		write(1, "\n", 1);
		i++;
	}


}

