/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:08:04 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/09/25 12:08:07 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_recursive_factorical(0));
	printf("%d\n", ft_recursive_factorical(1));
	printf("%d\n", ft_recursive_factorical(-1));
	printf("%d\n", ft_recursive_factorical(5));
	return (0);
}*/