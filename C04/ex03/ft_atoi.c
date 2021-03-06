/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:59:12 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/25 19:01:25 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char str)
{
	write(1, &str, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	m;
	int	sign;

	i = 0;
	n = 0;
	m = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		m = str[i] - 48;
		n = n * 10;
		n = n + m;
		i++;
	}
	return (n * sign);
}

int	main(void)
{
	printf("%d", ft_atoi("   -- -+--+1234ab567"));
}
