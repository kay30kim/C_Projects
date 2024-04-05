/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:09:42 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/09/25 12:56:14 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_initialization(int *ch_col, int *ch_dia)
{
	int	i;

	i = 0;
	while (i < 20)
		ch_col[i++] = 0;
	i = 0;
	while (i < 40)
		ch_dia[i++] = 0;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int *ch_col, int *col)
{
	int	i;
	int	j;

	i = 1;
	while (i <= 10)
	{
		j = 0;
		while (j < 10 && ch_col[j] != i)
		{
			j++;
		}
		if (j != 10)
			ft_putchar(j + '0');
		i++;
	}
	write(1, "\n", 1);
	*col = 10;
}

void	ft_put_queen(int *ch_col, int *ch_dia, int depth, int *ans)
{
	int	col;

	col = -1;
	if (depth == 10)
	{
		ft_print(ch_col, &col);
		(*ans)++;
		return ;
	}
	while (++col < 10)
	{
		if (ch_col[col] == 0 && ch_dia[depth + col] == 0)
		{
			if (ch_dia[20 + depth - col + 10] == 0)
			{
				ch_col[col] = depth + 1;
				ch_dia[depth + col] = 1;
				ch_dia[20 + depth - col + 10] = 1;
				ft_put_queen(ch_col, ch_dia, depth + 1, ans);
				ch_col[col] = 0;
				ch_dia[depth + col] = 0;
				ch_dia[20 + depth - col + 10] = 0;
			}
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	check_col[20];
	int	check_dia[40];
	int	ans;

	ans = 0;
	ft_initialization(check_col, check_dia);
	ft_put_queen(check_col, check_dia, 0, &ans);
	return (ans);
}
/*  i + j		//  leftrow -> righttop */
/*  i - j + n	//  rightrow -> lefttop */
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_ten_queens_puzzle());
	return (0);
}*/