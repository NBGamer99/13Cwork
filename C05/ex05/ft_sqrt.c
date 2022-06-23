/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:33:38 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/23 23:23:49 by ynabouzi         ###   ########.fr       */
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

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_sqrt(2147395600));
// }
