/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2022/06/23 18:27:42 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/23 18:27:42 by ynabouzi         ###   ########.fr       */
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

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= check_perfect(nb))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int i = 0;
// 	while (i < 100)
// 	{
// 		printf("is this %d really a prime number ? %d\n", i, ft_is_prime(i));
// 		i++;
// 	}
// }
