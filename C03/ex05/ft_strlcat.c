/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:05:48 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/09/21 18:49:07 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	des_len;
	unsigned int	j;

	src_len = 0;
	des_len = 0;
	j = 0;
	while (src[src_len])
		src_len++;
	while (dest[des_len])
		des_len++;
	if (des_len >= size)
		return (src_len + size);
	while (des_len + j < size - 1 && src[j])
	{
		dest[des_len + j] = src[j];
		j++;
	}
	dest[des_len + j] = '\0';
	return (src_len + des_len);
}
