/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:08:22 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/09/25 12:08:23 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		num *= nb;
		power--;
	}
	return (num);
}
/*
#include <stdio.h>
int main() {
	printf("%d\n", ft_iterative_power(2, 1));
	printf("%d\n", ft_iterative_power(2, 2));
	printf("%d\n", ft_iterative_power(2, 3));
	printf("%d\n", ft_iterative_power(2, 0));
	printf("%d\n", ft_iterative_power(2, -1));
}*/
