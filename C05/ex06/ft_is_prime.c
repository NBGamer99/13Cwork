/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 20:50:11 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/25 20:50:11 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_perfect(int nb)
{
	int	i;

	i = 2;
	if (nb == 2)
		return (1);
	while (i <= 46340 && i * i < nb)
		i++;
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	hh;

	i = 2;
	if (nb <= 1)
		return (0);
	hh = check_perfect(nb);
	while (i <= hh)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	int i = 0;
	while (i < 1000)
	{
	    if (ft_is_prime(i) == 1)
	        printf("%d\n", i);
	    i++;
	}
	// printf("%d", ft_is_prime(2));
}
