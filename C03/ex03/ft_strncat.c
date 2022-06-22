/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:27:48 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/22 16:20:11 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (nb == 0)
		return (dest);
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main()
// {
// 	char test[256] = "zxcvzxcvzxcvxzcvzxcvzxcv";
// 	char test1[256] = "zxcvzxcvzxcvxzcvzxcvzxcv";
// 	char test2[256] = "zxcvzxcvzxcvxzcvzxcvzxcv";
// 	char test3[256] = "zxcvzxcvzxcvxzcvzxcvzxcv";
// 	printf("16 => %s\n", ft_strncat(test, "asdf", 16));
// 	printf("16 => %s\n", ft_strncat(test1, "", 16));
// 	printf("0 => %s\n", strncat(test2, "qwerty", 0));
// 	printf("3 => %s\n", ft_strncat(test3, "asdf", 3));
// 	printf("expected : \nzxcvzxcvzxcvxzcvzxcvzxcvasdf\nzxcvzxcvzxcvxzcvzxcvzxcv\nqwerty\nqwertyasd\n");
// }
