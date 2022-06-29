/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:03:03 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/29 18:29:46 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
