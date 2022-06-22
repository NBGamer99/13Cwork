/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 01:05:08 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/15 23:23:40 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	n(char *str)
{
	if ((*str < '0' || *str > '9'))
		return (0);
	return (1);
}

int	a(char *str)
{
	if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (a(&str[i]) == 1 && n(&str[i - 1]) == 0 && a(&str[i - 1]) == 0)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
