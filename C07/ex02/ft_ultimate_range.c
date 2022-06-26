/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:02:38 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/26 19:28:07 by ynabouzi         ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (*range == NULL)
		return (-1);
	return (max - min);
}

int	main(void)
{
	int	i;
	int	min;
	int	max;
	// int	direction;
	int	**tab = (int **)malloc(sizeof(int *) * 3);

	i = 0;
	min = -5;
	max = 10;
	// direction = 0;
	// direction = max > min ? 1 : -1;
	*tab = ft_range(min, max);
	while (i < (max - min))
	{
		printf(" ,%d", tab[0][i]);
		i++;
	}
}
