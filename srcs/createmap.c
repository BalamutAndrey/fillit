/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 20:14:37 by eboris            #+#    #+#             */
/*   Updated: 2019/10/20 19:52:08 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "createmap.h"

int	fil_new_map(t_tet *tet, int *figure, int fig_num)
{
	int		map_size;
	char	map[105][105];

	map_size = 1;
	return (1);
}

int	fil_create_map(char *map[105], int *figure, int map_size, int fig_num)
{
	int		x;
	int		y;

	map[0][0] = map_size;
	map[0][1] = fig_num;
	x = 1;
	while (x <= map_size)
	{
		y = 1;
		while (y <= map_size)
		{
			map[x][y] = '.';
			y++;
		}
		x++;
	}
	if ((x != (map_size + 1)) || (y != (map_size + 1)))
		return (0);
	x = 0;
	while (figure[x] > 0)
	{
		map[0][2 + x] = figure[x];
		x++;
	}
	return (1);
}
