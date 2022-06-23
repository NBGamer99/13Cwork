/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 03:17:52 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/23 03:17:52 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_perfect(int nb)
{
	int	i;

	i = 2;
	while (i <= 46340 && i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
		return (check_perfect(nb));
}

int ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return 0;
	while (i <= ft_sqrt(nb))
	{
		if (nb % i == 0)
			return 0;
		i++;
	}

	return 1;
}

#include <stdio.h>
int main()
{
	int i = 10;
printf("is this %d really a prime number ? %d ",i,ft_is_prime(i));
}
