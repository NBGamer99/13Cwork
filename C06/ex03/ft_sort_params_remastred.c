/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params_remastred.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:44:03 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/25 14:34:05 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *str1, char *str2)
{
	while (*str1 != '\0')
	{
		if (*str1 != *str2)
			break ;
		str1++;
		str2++;
	}
	return ((unsigned char)*str1 - (unsigned char)*str2);
}

void	print_words(char **str, int len)
{
	int	i;

	i = 1;
	while (i < len)
	{
		put_str(str[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	while (i < ac)
	{
		j = 0;
		while (j < ac - 1)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				temp = av[j];
				av[j] = av[j + 1];
				av[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	print_words(av, ac);
	return (0);
}
