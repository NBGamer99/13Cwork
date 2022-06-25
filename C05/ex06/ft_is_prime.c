/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 19:05:15 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/25 19:05:15 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_perfect(int nb)
{
	int	i;

	i = 2;
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
