/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:23:07 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/09/29 13:05:47 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	num;

	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (0);
	num = min;
	i = 0;
	while (num < max)
		arr[i++] = num++;
	return (arr);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*arr = ft_range(-5, -2);
	int i = -1;
	//printf("size = %d\n", (int)sizeof(arr));
	while (++i < 5)
		printf("%d ",arr[i]);
	printf("\n");

	i = -1;
	arr = ft_range(1,5);
	//printf("size = %d\n", (int)sizeof(arr));
	while (++i < (int)sizeof(arr))
		printf("%d ",arr[i]);
	printf("\n");
	return (0);
}
*/