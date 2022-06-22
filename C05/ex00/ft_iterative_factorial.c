/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:56:45 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/22 17:31:44 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	res = 1;
	i = 1;
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	while (i <= nb)
	{
		res = res * i;
		i++;
	}
	return (res);
}

// int	ft_iterative_factorial(int nb)
// {
// 	int	i;
// 	int res;

// 	res = nb;
// 	i = nb;

// 	if (nb == 1 || nb == 0)
// 		return (1);
// 	while (i > 1)
// 	{
// 		i--;
// 		res = res * i;
// 	}
// 	return (res);
// }

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(-4));
}
