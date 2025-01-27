/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:09:09 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/09/25 12:09:09 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	num;

	num = 1;
	if (nb > 0)
	{
		while (num < (nb / num))
			num++;
		if ((num * num) == nb)
			return (num);
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(5));
	printf("%d\n", ft_sqrt(9));
	return (0);
}*/
