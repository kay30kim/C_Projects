/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:05:51 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/09/22 22:17:37 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size <= 0 || dest == NULL)
		return (0);
	while (*src != '\0' && i < size - 1)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (*src != '\0')
	{
		src++;
		i++;
	}
	*dest = '\0';
	return (i);
}
