/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:01:54 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/29 18:27:17 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdint.h>

void	printT(int *tab, int size)
{
	int	i;

	i = 0;
	printf("[");
	while (i < size)
	{
		if (i != size - 1)
			printf("%d, ", tab[i]);
		else
			printf("%d", tab[i]);
		i++;
	}
	printf("]");
}

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
	int	*res;
	int	i;

	res = ft_range(5, 10);
	for (i = 0; i < 5; i++)
		printf("%d,", res[i]);
	printf("\n");
	res = ft_range(-20, -15);
	for (i = 0; i < 5; i++)
		printf("%d,", res[i]);
	printf("\n");
	res = ft_range(100, 101);
	for (i = 0; i < 1; i++)
		printf("%d,", res[i]);
	printf("\n");
	res = ft_range(10, 5);
	printf("%" PRIxPTR "\n", (uintptr_t)res);
	// ==== check -e ====
	// $expected = '5,6,7,8,9,
	// -20,-19,-18,-17,-16,
	// 100,
	// 0
	// ';
	// ====
}
