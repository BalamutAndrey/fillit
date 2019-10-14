/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remspace_y.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:07:58 by eboris            #+#    #+#             */
/*   Updated: 2019/10/13 19:16:47 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "remspace.h"

int	fil_remspace_y1(char cur_fig[4][4], int *x, int *y)
{
	*x = 4;
	*y = 4;
	if ((cur_fig[0][3] == '.') && (cur_fig[1][3] == '.') &&
			(cur_fig[2][3] == '.') && (cur_fig[3][3] == '.'))
	{
		*y = *y - 1;
	}
	if ((cur_fig[0][2] == '.') && (cur_fig[1][2] == '.') &&
			(cur_fig[2][2] == '.') && (cur_fig[3][2] == '.'))
	{
		cur_fig[0][2] = cur_fig[0][3];
		cur_fig[1][2] = cur_fig[1][3];
		cur_fig[2][2] = cur_fig[2][3];
		cur_fig[3][2] = cur_fig[3][3];
		cur_fig[0][3] = '.';
		cur_fig[1][3] = '.';
		cur_fig[2][3] = '.';
		cur_fig[3][3] = '.';
		*y = *y - 1;
	}
	return (fil_remspace_y2(cur_fig, x, y));
}

int	fil_remspace_y2(char cur_fig[4][4], int *x, int *y)
{
	if ((cur_fig[0][1] == '.') && (cur_fig[1][1] == '.') &&
			(cur_fig[2][1] == '.') && (cur_fig[3][1] == '.'))
	{
		cur_fig[0][1] = cur_fig[0][2];
		cur_fig[1][1] = cur_fig[1][2];
		cur_fig[2][1] = cur_fig[2][2];
		cur_fig[3][1] = cur_fig[3][2];
		cur_fig[0][2] = cur_fig[0][3];
		cur_fig[1][2] = cur_fig[1][3];
		cur_fig[2][2] = cur_fig[2][3];
		cur_fig[3][2] = cur_fig[3][3];
		cur_fig[0][3] = '.';
		cur_fig[1][3] = '.';
		cur_fig[2][3] = '.';
		cur_fig[3][3] = '.';
		*y = *y - 1;
	}
	return (fil_remspace_y3(cur_fig, x, y));
}

int	fil_remspace_y3(char cur_fig[4][4], int *x, int *y)
{
	if ((cur_fig[0][0] == '.') && (cur_fig[1][0] == '.') &&
			(cur_fig[2][0] == '.') && (cur_fig[3][0] == '.'))
	{
		cur_fig[0][0] = cur_fig[0][1];
		cur_fig[1][0] = cur_fig[1][1];
		cur_fig[2][0] = cur_fig[2][1];
		cur_fig[3][0] = cur_fig[3][1];
		cur_fig[0][1] = cur_fig[0][2];
		cur_fig[1][1] = cur_fig[1][2];
		cur_fig[2][1] = cur_fig[2][2];
		cur_fig[3][1] = cur_fig[3][2];
		cur_fig[0][2] = cur_fig[0][3];
		cur_fig[1][2] = cur_fig[1][3];
		cur_fig[2][2] = cur_fig[2][3];
		cur_fig[3][2] = cur_fig[3][3];
		cur_fig[0][3] = '.';
		cur_fig[1][3] = '.';
		cur_fig[2][3] = '.';
		cur_fig[3][3] = '.';
		*y = *y - 1;
	}
	return (fil_remspace_x1(cur_fig, x));
}

int	fil_printtet(char cur_fig[4][4], int *x, int *y)
{
	int	n;
	int	m;

	n = 0;
	ft_putstr("x = ");
	ft_putnbr(*x);
	ft_putstr(", y = ");
	ft_putnbr(*y);
	ft_putstr(".\n");
	while (n < *x)
	{
		m = 0;
		while (m < *y)
		{
			ft_putchar(cur_fig[n][m]);
			m++;
		}
		ft_putchar('\n');
		n++;
	}
	ft_putchar('\n');
	return (1);
}
