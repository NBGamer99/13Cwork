/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:01:03 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/30 20:33:02 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	put_char(char str)
{
	write(1, &str, 1);
}

int	ft_str_is_printable(char c)
{
	if ((c >= 127 || c < 32))
		return (0);
	return (1);
}

int	ft_str_is_numeric(char c)
{
	if ((c < '0' || c > '9'))
		return (0);
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (ft_str_is_printable(str[i]) == 1)
			put_char(str[i]);
		else
		{
			put_char('\\');
			put_char("0123456789abcdef"[((unsigned char)str[i] / 16)]);
			put_char("0123456789abcdef"[((unsigned char)str[i] % 16)]);
		}
		i++;
	}
}

int main()
{
	// char test[] = "Coucou\ntu vas bien \xf4?";
	ft_putstr_non_printable("asdf\x7f\x1fhi\x01\xfflol");
// ==== check -e ====
// $expected = 'asdf\\7f\\1fhi\\01\\fflol';
}
