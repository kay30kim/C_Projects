/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:09:25 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/09/25 12:09:27 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			nb += 2;
			i = 1;
		}
		i += 2;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_find_next_prime(-2147483648));
	printf("%d\n", ft_find_next_prime(6));
	printf("%d\n", ft_find_next_prime(2147483645));
	printf("%d\n", ft_find_next_prime(11));
	return (0);
}*/