/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:23:51 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/09/28 13:23:52 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_base_match(char *base, char c);
int	ft_strlen(char *str);
int	ft_is_space(char c);
int	ft_check_base(char *base);

long	ft_atoi(char *nbr, char *base_from)
{
	long	num;
	int		i;
	int		sign;
	int		len;

	num = 0;
	i = 0;
	sign = 1;
	len = ft_strlen(base_from);
	while (ft_is_space(nbr[i]))
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
		if (nbr[i++] == '-')
			sign *= -1;
	while (ft_base_match(base_from, nbr[i]) != -1)
	{
		num *= len;
		num += ft_base_match(base_from, nbr[i++]);
	}
	return (num * sign);
}

int	ft_size(int num, int base_len)
{
	int	size;

	size = 0;
	if (num < 0)
		num = -num;
	while (++size && num / base_len)
		num /= base_len;
	return (size);
}

char	*ft_malloc(long *num, int len, int *i)
{
	char	*res;

	if (*num < 0)
	{
		res = (char *)malloc(sizeof(char) * (len + 2));
		if (!res)
			return (0);
		*num = -(*num);
		res[0] = '-';
		res[len + 1] = '\0';
		*i = len;
	}
	else
	{
		res = (char *)malloc(sizeof(char) * (len + 1));
		if (!res)
			return (0);
		*i = len - 1;
		res[len] = '\0';
	}
	return (res);
}

char	*ft_num2base(long num, char *base_to)
{
	int		len;
	int		base_len;
	int		i;
	char	*res;

	base_len = ft_strlen(base_to);
	len = ft_size(num, base_len);
	res = ft_malloc(&num, len, &i);
	if (!res)
		return (0);
	while (num)
	{
		res[i] = base_to[num % base_len];
		num /= base_len;
		i--;
	}
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	num;

	if (ft_check_base(base_from) || ft_check_base(base_to))
		return (0);
	num = ft_atoi(nbr, base_from);
	return (ft_num2base(num, base_to));
}
/*
#include <stdio.h>
int	main(void)
{
	char nbr[] = "  ---+--+17ab567";
	char nbr2[] = "  ----+--+-2147483648ab567";
	char base_from[] = "0123456789";
	char base_to[] = "01";
	char base_to2[] = "*#";
	char base_to3[] = "01234567";
	char base_to4[] = "0123456789abcdef";
	printf("%s\n", ft_convert_base(nbr, base_from, base_from));
	printf("%s\n", ft_convert_base(nbr, base_from, base_to));
	printf("%s\n", ft_convert_base(nbr, base_from, base_to2));
	printf("%s\n", ft_convert_base(nbr, base_from, base_to3));
	printf("%s\n", ft_convert_base(nbr, base_from, base_to4));
	printf("%s\n", ft_convert_base(nbr2, base_from, base_from));
	printf("%s\n", ft_convert_base(nbr2, base_from, base_to4));
	return (0);
}*/