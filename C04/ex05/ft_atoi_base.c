/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 21:43:19 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/23 03:04:22 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
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

int	*check_str(char *str, int *res)
{
	int	i;
	int	minus_count;

	i = 0;
	minus_count = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13) || str[i] == '-'
		|| str[i] == '+')
	{
		if (str[i] == '-')
			minus_count++;
		i++;
	}
	if (minus_count % 2 != 0)
		res[1] = -1;
	res[0] = i;
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	len_str;
	int	num;
	int	len_base;
	int	j;
	int	y[2] = {0,1};

	check_str(str,y);
	j = 0;
	len_str = ft_strlen(str) - 1;
	len_base = ulticheck(base);
	num = 0;
	while (len_str >= y[0] && len_base > 1)
	{
		num = num + index_of(base, str[j]) * ft_pow(len_base, len_str);
		len_str--;
		j++;
	}
	return (num * y[1]);
}

int	main(void)
{
	// char test[] = "abcde";
	// printf("%d",index_of(test,'f'));
	// int i = ft_strlen(test) - 1;
	// printf("i = %d\n",i);
	// while (i >= 0)
	// {
	// 	printf("%c",test[i]);
	// 	i--;
	// }
	// printf("%d",ft_pow(5,-1));
	printf("%d", ft_atoi_base("101", "01"));
	// printf("%d",ft_pow(3,4));
}
