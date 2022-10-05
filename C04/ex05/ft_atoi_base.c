/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 21:26:27 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/30 21:28:48 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

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

int	index_of(char *base, char to_find)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == to_find)
			return (i);
		i++;
	}
	return (-1);
}

int	ulticheck(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (-1);
	while (base[i] != '\0')
	{
		j = 0;
		if (base[i] == '-' || base[i] == '+')
			return (-1);
		while (j < i)
		{
			if (base[i] == base[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (ft_strlen(base));
}

int	ft_pow(int num, int exponant)
{
	if (exponant == 0 || num == 1)
		return (1);
	else if (exponant < 0)
		return (0);
	else
		return (num * ft_pow(num, exponant - 1));
}

int	ft_atoi_base(char *str, char *base)
{
	int	len_str;
	int	num;
	int	len_base;
	int	j;
	int	minus_count;

	j = 0;
	len_str = ft_strlen(str) - 1;
	len_base = ulticheck(base);
	num = 0;
	minus_count = 1;
	while (str[j] == '-' || str[j] == '+')
	{
		if (str[j] == '-')
			minus_count = -minus_count;
		j++;
	}
	while (len_str >= j && len_base > 1)
	{
		num = num + index_of(base, str[j]) * ft_pow(len_base, len_str--);
		j++;
	}
	return (num * minus_count);
}

int	main(void)
{
	// char test[] = "abcde";
	// printf("%d",index_of(test,'f'));
	// int i = ft_strlen(test) - 1;
	// printf("i = %d\n",i);
	// while (i >= 0)
	// {
	//     printf("%c",test[i]);
	//     i--;
	// }
	// printf("%d",ft_pow(5,-1));
	printf("%d", ft_atoi_base("--10", "01"));
	// printf("%d",ft_pow(3,4));
}
