#include <stdio.h>
#include <stdlib.h>

char	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*h;
	char	*hh;

	i = 0;
	len = 0;
	hh = (char *)malloc(1 * sizeof(char));
	if (size == 0)
		return (hh);
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	h = malloc(sizeof(char) * (len + ((size - 1) * (ft_strlen(sep))) + 1));
	*h = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(h, strs[i]);
		if (i != size - 1)
			ft_strcat(h, sep);
		i++;
	}
	return (h);
}

int	main(void)
{
	char	**array;
	char	*sep;

	// char array[3][5] = {"Firs","Seco","Thir"};
	array = (char **)malloc(sizeof(char *) * 3);
	*array = (char *)malloc(sizeof(char) * 5);
	array[0] = "firs";
	array[1] = "seco";
	array[2] = "thir";
	sep = "+";
	printf("%s",ft_strjoin(3, array, sep));
	// printf("%d",ft_strlen(array[1]));
	// printf("%s",array[0]);
}
