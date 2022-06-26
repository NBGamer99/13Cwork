/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 20:54:10 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/25 21:10:25 by ynabouzi         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (ft_is_prime(i) != 1)
		i++;
	return (i);
}
#include <stdio.h>
#include <limits.h>

int main()
{
	printf("%d", ft_find_next_prime(1021));
}
