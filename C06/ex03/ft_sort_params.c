/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 13:11:20 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/24 13:11:20 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

int	main(int ac, char** av)
{
	char	*temp;
	int		zidkaleb;
	int		i;

	zidkaleb = 1;
	while (zidkaleb)
	{
		zidkaleb = 0;
		i = 1;
		while (i < ac - 1)
		{
			if (ft_strcmp(av[i],av[i + 1]) > 0)
			{
				temp = av[i];
				av[i] = av[i + 1];
				av[i + 1] = temp;
				zidkaleb = 1;
			}
			i++;
		}
	}
	i = 1;
	while (i < ac){
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
	return 0;
}
