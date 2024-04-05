/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:24:13 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/09/28 13:24:14 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_char_in_here(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_wort_cnt(char *str, char *charset)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		while (str[i] != '\0' && is_char_in_here(str[i], charset))
			i++;
		if (str[i] != '\0')
			cnt++;
		while (str[i] != '\0' && !is_char_in_here(str[i], charset))
			i++;
	}
	return (cnt);
}

char	*ft_malloc_word(char *str, char *charset)
{
	int		len;
	char	*res;

	len = 0;
	while (str[len] != '\0' && !is_char_in_here(str[len], charset))
		len++;
	res = (char *)malloc(sizeof(char) * (len + 1));
	len = -1;
	while (str[++len] != '\0' && !is_char_in_here(str[len], charset))
		res[len] = str[len];
	res[len] = '\0';
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		size;
	char	**res;

	i = 0;
	size = ft_wort_cnt(str, charset);
	res = (char **)malloc(sizeof(char *) * (size + 1));
	while (i < size)
	{
		while (*str != '\0' && is_char_in_here(*str, charset))
			str++;
		if (*str != '\0')
		{
			res[i++] = ft_malloc_word(str, charset);
		}
		while (*str != '\0' && !is_char_in_here(*str, charset))
			str++;
	}
	res[i] = 0;
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	int		index;
	char	**split;
	char	*str = "heaaallobob 423e212 quebec byebpye oh";
	char	*charset = "eklp";

	split = ft_split(str, charset);
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}*/