/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:01:54 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/26 02:14:12 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int max, int min)
{
	int	direction;
	int	*tab;
	int	i;

	direction = 0;
	if (max < min)
		direction = 1;
	else
		direction = -1;
	tab = malloc(sizeof(int) * ((min - max) * direction));
	i = 0;
	while (i < (min - max) * direction)
	{
		tab[i] = max + i * direction;
		i++;
	}
	return (tab);
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
	direction = end > start ? 1 : -1;
	tab = ft_range(start, end);
	while (i < direction * (end - start))
	{
		printf(" ,%d", tab[i]);
		i++;
	}
}
