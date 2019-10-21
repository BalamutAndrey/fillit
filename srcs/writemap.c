/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writemap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:53:59 by eboris            #+#    #+#             */
/*   Updated: 2019/10/21 23:09:06 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "writemap.h"

int	fil_write(t_tet *tet, char map[105][105], int figure)
{
	t_tet	*temp;
	int		x;
	int		y;

	temp = tet;
	x = 1;
	while (temp->id != map[0][2 + figure])
		temp = temp->next;
	while (x <= map[0][0])
	{
		y = 0;
		while (++y <= map[0][0])
			if (fil_write_check(temp, map, x, y) == 1)
			{
				map[0][100] = figure;
				map[0][101] = x;
				map[0][102] = y;
				if (fil_write_figure(tet, map) == 1)
					return (1);
			}
		x++;
	}
	return (0);
}

int fil_write_check(t_tet *tet, char map[105][105], int x, int y)
{
	int	n;
	int	m;

	n = 0;
	if (((x + tet->size_x - 1) > map[0][0]) || ((y + tet->size_y - 1) > map[0][0]))
		return (0);
	while (n <= tet->size_x)
	{
		m = 0;
		while (m <= tet->size_y)
		{
			if ((tet->tet[n][m] == '#') && (map[x + n][y + m] != '.'))
				return (0);
			m++;
		}
		n++;
	}
	return (1);
}

int	fil_write_figure(t_tet *tet, char map[105][105])
{
	t_tet	*temp;
	int		n;
	int		m;
	int		x;
	int		y;
	char	tempmap[105][105];

	x = 0;
	while (x < 105)
	{
		y = 0;
		while (y < 105)
		{
			tempmap[x][y] = map[x][y];
			y++;
		}
		x++;
	}

	temp = tet;
	x = map[0][100];
	y = map[0][2 + x];
	while (temp->id != y)
		temp = temp->next;
	n = map[0][101];
	m = map[0][102];
	x = 0;
	while (x < temp->size_x)
	{
		y = 0;
		while (y < temp->size_y)
		{
			if (temp->tet[x][y] == '#')
			{
				tempmap[n + x][m + y] = 'A' + map[0][100];
			}
			y++;
		}
		x++;
	}
	x = map[0][100];
	y = map[0][2 + x + 1];
	if (y != 0)
	{
		if (fil_write(tet, tempmap, x + 1) == 0)
			return (0);
	}
	else
	{
		x = 1;
		while (x <= map[0][0])
		{
			y = 1;
			while (y <= map[0][0])
			{
				ft_putchar(tempmap[x][y]);
				y++;
			}
			ft_putchar('\n');
			x++;
		}
//		ft_putchar('\n');
//		ft_putstr("\n map_size = ");
//		ft_putnbr(map[0][0]);
//		ft_putchar('\n');
	}
	return (1);
}
