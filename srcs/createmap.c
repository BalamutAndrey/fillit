/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 20:14:37 by eboris            #+#    #+#             */
/*   Updated: 2019/10/18 20:39:36 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "createmap.h"

int	fil_new_map(t_tet *tet, int *figure, int fig_num)
{
	int		map_size;
	char	*map;
	
	map_size = 1;
	map = fil_create_map(map_size);
	while (fil_write(tet, figure, fig_num. map) == 0)
	{
		if (fil_del_map(map, map_size) == 0)
			return (0);
		map_size++;
		map = fil_create_map(map_size);
	}
	return (1);
}

char	*fil_create_map(int map_size)
{
	char	map[map_size + 1][map_size + 1];
	int		x;
	int		y;

	map[0][0] = map_size;
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
	return (map);
}

int		fil_del_map(char *map, int map_size)
{
	;
}
