/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 02:12:38 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/20 20:36:44 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	destsize;
	unsigned int	j;
	unsigned int	srcsize;

	srcsize = ft_strlen(src);
	destsize = ft_strlen(dest);
	i = 0;
	j = 0;
	if (size <= destsize)
		return (srcsize + size);
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < size - destsize - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (srcsize + destsize);
}

// int	main(void)
// {
// 	char	test[256] = "\0";
// 	// printf("%u-", ft_strlcat(test, "asdf", 16));
// 	// printf("%s\n", test);
// 	// printf("%u-", ft_strlcat(test, "asdf", 6));
// 	// printf("%s\n", test);
// 	// printf("%u-", ft_strlcat(test, "asdf", 4));
// 	// printf("%s\n", test);
// 	// printf("%u-", ft_strlcat(test, "", 16));
// 	// printf("%s\n", test);
// 	printf("%lu-", strlcat(test, "asdf", 1));
// 	printf("%s\n", test);
// 	// printf("%u-", ft_strlcat(test, "asdf", 1));
// 	// printf("%s\n", test);
// 	// char test[20] = "\0";
// 	// printf("%s-", strcat(test, "asdf"));
// 	// printf("%s\n", test);
// 	// ==== check -e ====
// 	printf("\n4-asdf\n8-asdfa\n8-asdfa\n5-asdfa\n4-asdfa\n");
// 	// ====
// }
