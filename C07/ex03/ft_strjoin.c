/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:44:52 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/26 22:43:31 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(int size, char **strs, char *sep)
{
	strs[0] = 0;
	if (size == 0)
		return (&strs[0]);

}

// #include <stdio.h>
// #include <stdlib.h>

int	main(void)
{
	// char array[3][5] = {"Firs","Seco","Thir"};
	// char **array = (char **)malloc(sizeof(char *) * 3);
	// *array = (char *)malloc(sizeof(char) * 5);
	// array[0] = "firs";
	// array[1] = "seco";
	// array[2] = "thir";
	printf("%lu", sizeof(array));
}
