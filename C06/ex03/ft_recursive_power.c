/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:08:37 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/09/25 12:08:38 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}
/*
#include <stdio.h>
int main() {
	printf("%d\n", ft_recursive_power(-2, 1));
	printf("%d\n", ft_recursive_power(2, 2));
	printf("%d\n", ft_recursive_power(2, 3));
	printf("%d\n", ft_recursive_power(2, 0));
	printf("%d\n", ft_recursive_power(2, -1));
}*/
