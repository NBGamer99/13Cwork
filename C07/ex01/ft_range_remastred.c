/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range_remastred.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:03:03 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/26 18:42:43 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*a;

	if (min >= max)
		return (NULL);
	i = 0;
	a = malloc(sizeof(int) * (max - min));
	if (a == NULL)
		return (NULL);
	while (i < (max - min))
	{
		a[i] = min + i;
		i++;
	}
	return (a);
}

int	main(void)
{
	int	i;
	int	start;
	int	end;
	int	direction;
	int	*tab;

	i = 0;
	start = -5;
	end = 10;
	direction = 0;
	// direction = end > start ? 1 : -1;
	tab = ft_range(start, end);
	// printf("%p, ", &tab);
	while (i < (end - start))
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
