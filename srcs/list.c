/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:56:36 by eboris            #+#    #+#             */
/*   Updated: 2019/10/11 15:14:06 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_tet	*fil_wrttet(t_tet *tet, int id, int x, int y)
{
	t_tet	*temp;

	if (id == 1)
	{
		fil_newlst(tet, id, x, y);
		temp = tet;
	}
	else
	{
		temp = malloc(sizeof(t_tet));
		if (temp == NULL)
			return (0);
		fil_newlst(temp, id, x, y);
		tet->next = temp;
	}
	return (temp);
}

int		fil_newlst(t_tet *new, int id, int size_x, int size_y)
{
	int		x;
	int		y;

	x = 0;
	new->id = id;
	new->size_x = size_x;
	new->size_y = size_y;
	new->next = NULL;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			new->tet[x][y] = '.';
			y++;
		}
		x++;
	}
	return (0);
}
