/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 20:14:37 by eboris            #+#    #+#             */
/*   Updated: 2019/10/21 23:06:52 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "createmap.h"

int	fil_new_map(t_tet *tet, int *figure, int fig_num)
{
	int		map_size;
	int		x;
	int		y;
	int		finish;
	char	map[105][105];

	map_size = 1;
	finish = 0;
	while (finish == 0)
	{
		x = 1;
		while (x <= map_size)
		{
			y = 0;
			while (++y <= map_size)
				map[x][y] = '.';
			x++;
		}
		map[0][0] = map_size;
		finish = fil_create_map(tet, map, figure, fig_num);
		if (map_size > 105)
			return (0);
		map_size++;
	}
	return (1);
}

int	fil_create_map(t_tet *tet, char map[105][105], int *figure, int fig_num)
{
	int		x;

	map[0][1] = fig_num + 1;
	x = 0;
	while (x < 26)
	{
		map[0][2 + x] = figure[x];
		x++;
	}
	return (fil_write(tet, map, 0));
}
