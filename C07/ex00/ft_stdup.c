/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:08:37 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/25 15:25:36 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dup;

	len = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * len);
	while (len >= 0)
	{
		dup[len] = src[len];
		len--;
	}
	return (dup);
}

int	main(void)
{
	char	dest[10] = "hello";
	char	*dup;

	dup = ft_strdup(dest);
	free(dup);
	printf("adress of original [%s] ==> %p\naddress of dup [%s] ==> %p\n",dest,dest,dup,dup);
}
