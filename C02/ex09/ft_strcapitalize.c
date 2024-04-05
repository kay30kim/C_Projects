/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:04:57 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/09/21 14:51:21 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] < 'A' || str[i] > 'z' || (str[i] > 'Z' && str[i] < 'a'))
			i++;
		if (i - 1 >= 0 && str[i - 1] >= '0' && str[i - 1] <= '9')
		{
			while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
				i++;
			i--;
		}
		else if (i == 0 || (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		i++;
		while ((str[i] >= 'A' && str[i] <= 'Z') || 
			(str[i] >= 'a' && str[i] <= 'z'))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			i++;
		}
	}
	return (str);
}
