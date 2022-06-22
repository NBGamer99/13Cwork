/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:59:12 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/22 13:44:42 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	put_char(char str)
{
	write(1, &str, 1);
}

int	check_str(char *str)
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
		put_char('-');
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	m;

	i = check_str(str);
	n = 0;
	m = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		m = str[i] - 48;
		n = n * 10;
		n = n + m;
		i++;
	}
	return (n);
}

int	main(void)
{
	printf("%d", ft_atoi("   ---+--+1234ab567"));
}
