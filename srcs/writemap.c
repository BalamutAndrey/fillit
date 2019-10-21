/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writemap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:53:59 by eboris            #+#    #+#             */
/*   Updated: 2019/10/21 23:45:52 by eboris           ###   ########.fr       */
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
				if (fil_write_figure(tet, map, x, y) == 1)
					return (1);
			}
		x++;
	}
	return (0);
}

int	fil_write_check(t_tet *tet, char map[105][105], int x, int y)
{
	int	n;
	int	m;

	n = 0;
	if (((x + tet->size_x - 1) > map[0][0]) ||
			((y + tet->size_y - 1) > map[0][0]))
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

int	fil_write_figure(t_tet *tet, char map[105][105], int x, int y)
{
	int		m;
	int		n;
	char	tempmap[105][105];

	m = 0;
	while (m < 105)
	{
		n = 0;
		while (n < 105)
		{
			tempmap[m][n] = map[m][n];
			n++;
		}
		m++;
	}
	return (fil_write_figure_2(tet, tempmap, x, y));
}

int	fil_write_figure_2(t_tet *tet, char map[105][105], int x, int y)
{
	t_tet	*temp;
	int		m;
	int		n;

	temp = tet;
	m = map[0][100];
	n = map[0][2 + m];
	while (temp->id != n)
		temp = temp->next;
	m = 0;
	while (m < temp->size_x)
	{
		n = -1;
		while (++n < temp->size_y)
			if (temp->tet[m][n] == '#')
				map[x + m][y + n] = 'A' + map[0][100];
		m++;
	}
	m = map[0][100];
	if (map[0][2 + m + 1] == 0)
		return (fil_print(map));
	if (fil_write(tet, map, m + 1) == 0)
		return (0);
	return (1);
}

int	fil_print(char map[105][105])
{
	int	x;
	int	y;

	x = 1;
	while (x <= map[0][0])
	{
		y = 1;
		while (y <= map[0][0])
		{
			ft_putchar(map[x][y]);
			y++;
		}
		ft_putchar('\n');
		x++;
	}
	return (1);
}
