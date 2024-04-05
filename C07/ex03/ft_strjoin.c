/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:23:38 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/09/30 12:16:45 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_strcpy(char *str1, char *str2)
{
	int	j;

	j = -1;
	while (str2[++j])
	{
		str1[j] = str2[j];
	}
}

int	ft_res_len(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < size - 1)
		len += ft_strlen(strs[i++]) + ft_strlen(sep);
	len += ft_strlen(strs[i]);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	char	*ptr;
	int		len;
	int		i;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	len = ft_res_len(size, strs, sep);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	i = -1;
	ptr = res;
	while (++i < size)
	{
		ft_strcpy(ptr, strs[i]);
		ptr += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(ptr, sep);
			ptr += ft_strlen(sep);
		}
	}
	*ptr = '\0';
	return (res);
}
/*
#include <stdio.h>
int	main()
{
	char	**strs;
	char	*sep = "KAY";
	char	*res;

	strs = (char **)malloc(4 * sizeof(strs));
	strs[0] = "hello";
	strs[1] = "I'm not sure whe";
	strs[2] = "it workasefklsdjfa liesjavzdv3432890-=";
	strs[3] = "hahahahahaha";
	res = ft_strjoin(4, strs, sep);
	printf("%s\n", res);
	return (0);
}
*/