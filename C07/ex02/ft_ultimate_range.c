/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:23:25 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/09/30 11:22:36 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	num;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (-1);
	i = 0;
	num = min;
	while (num < max)
		arr[i++] = num++;
	*range = arr;
	return (i);
}
/*
#include <stdio.h>
void	print_array(int numbers[], int size)
{
	int	index;

	index = 0;
	while (index < size)
	{
		printf("%d ", numbers[index++]);
	}
	printf("\n");
}
int	main(){
	int *oba, *argv;
	int	size[4];

	argv = oba;
	size[0] = ft_ultimate_range(&oba, -1, 5);
	print_array(oba, size[0] + 2);

	oba++;
	size[1] = ft_ultimate_range(&oba, 0, 3);
	print_array(oba, size[1] + 2);

	oba++;
	size[2] = ft_ultimate_range(&oba, -6, -2);
	print_array(oba, size[2] + 2);

	oba++;
	size[3] = ft_ultimate_range(&oba, 0, 0);
	print_array(oba, size[3]);

	// for (int i = 0; i < 3; i++)
	// {
	// 	//printf("%p\n", (void **)argv);
	// 	print_array(argv, size[i]);
	// 	argv++;
	// }
	return 0;
}
*/
/*
	int **range, **argv;
	int size[4];

	argv = range;
	size[0] = ft_ultimate_range(range, -1, 5);

	range++;
	size[1] = ft_ultimate_range(range, 0, 3);

	range++;
	size[2] = ft_ultimate_range(range, -6, -2);

	range++;
	size[3] = ft_ultimate_range(range, 0, 0);

	*/