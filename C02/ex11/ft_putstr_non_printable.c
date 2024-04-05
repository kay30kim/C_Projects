/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:33:06 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/09/21 19:29:39 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_makearr(char *arr)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i < 10)
			arr[i] = i + '0';
		else
			arr[i] = i - 10 + 'a';
		i++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	arr[17];

	i = 0;
	ft_makearr(arr);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			ft_putchar(arr[str[i] / 16]);
			ft_putchar(arr[str[i] % 16]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
