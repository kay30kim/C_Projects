/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:22:17 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/09/29 12:27:30 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len + 1);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*arr;

	i = ft_strlen(src);
	arr = (char *)malloc(sizeof(char) * i);
	if (arr == NULL)
		return (NULL);
	i = -1;
	while (src[++i])
		arr[i] = src[i];
	arr[i] = '\0';
	return (arr);
}
/*
#include <stdio.h>
int	main(int argc, char **argv) 
{
	char * tmp = ft_strdup(argv[0]);
	argc = 2;
	printf("%s\n", tmp);
	return (0);
}
*/