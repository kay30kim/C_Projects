/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:09:18 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/09/25 12:09:19 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_is_prime(-2147483648));
	printf("%d\n", ft_is_prime(6));
	printf("%d\n", ft_is_prime(2147483645));
	printf("%d\n", ft_is_prime(11));
	return (0);
}*/