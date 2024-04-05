/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:07:07 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/09/25 12:07:09 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb)
	{
		num *= nb;
		nb--;
	}
	return (num);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(-1));
	printf("%d\n", ft_iterative_factorial(5));
	return (0);
}*/
