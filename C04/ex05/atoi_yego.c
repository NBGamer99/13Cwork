#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len++])
		continue ;
	return (len - 1);
}

int	check_doubles(char *str, char c, int len)
{
	int	occurance;
	int	i;

	occurance = 0;
	i = 0;
	while (i < len)
	{
		if (str[i] == c)
			occurance++;
		if (occurance > 1)
			return (1);
		i++;
	}
	return (0);
}

int	validate_base(char *base)
{
	int	len;
	int	i;

	len = 0;
	if (base)
		len = ft_strlen(base);
	if (len == 0 || len == 1)
		return (0);
	i = 0;
	while (i < len)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (check_doubles(base, base[i], len))
			return (0);
		i++;
	}
	return (len);
}

int	ft_index_of(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nbr;
	int	sign;
	int	len;

	len = validate_base(base);
	if (len == 0)
		return (0);
	i = 0;
	nbr = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_index_of(str[i], base) > 0)
	{
		nbr = nbr * len + ft_index_of(str[i], base);
		i++;
	}
	return (sign * nbr);
}
