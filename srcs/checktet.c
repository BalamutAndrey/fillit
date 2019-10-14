/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checktet.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:19:35 by eboris            #+#    #+#             */
/*   Updated: 2019/10/14 18:03:55 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checktet.h"

int	fil_checklist(t_tet *tet)
{
	int	x;
	int	y;
	int	z;

	z = 0;
	while (tet != NULL)
	{
		x = 0;
		while (x < tet->size_x)
		{
			y = 0;
			while (y < tet->size_y)
			{
				if ((tet->tet[x][y] != '.') && (tet->tet[x][y] != '#'))
					return (0);
				y++;
			}
			x++;
		}
		tet = tet->next;
		z++;
	}
	if (z == 19)
		return (1);
	return (0);
}

int	fil_checkcurr(t_tet *tet, char c_tet[20], int *figure, int fig_num)
{
	int		i;
	char	cur_fig[4][4];

	i = 0;
	if ((c_tet[4] != '\n') || (c_tet[9] != '\n') || (c_tet[14] != '\n') ||
				(c_tet[19] != '\n'))
		return (0);
	while (i < 20)
	{
		if ((c_tet[i] != '.') && (c_tet[i] != '#') && (c_tet[i] != '\n'))
			return (0);
		i++;
	}
	i = 0;
	while (i < 19)
	{
		if ((i != 4) && (i != 9) && (i != 14))
			cur_fig[i / 5][i % 5] = c_tet[i];
		i++;
	}
	return (fil_remspace(tet, cur_fig, figure, fig_num));
}

int	fil_remspace(t_tet *tet, char cur_fig[4][4], int *figure, int fig_num)
{
	int		x;
	int		y;
	t_tet	*temp;

	temp = tet;
	if (fil_remspace_y1(cur_fig, &x, &y) != 1)
		return (0);
	while (temp != NULL)
	{
		if ((temp->size_x == x) && (temp->size_y == y))
		{
			if (fil_figure(temp, cur_fig) == 1)
			{
				figure[fig_num] = temp->id;
				return (1);
			}
		}
		temp = temp->next;
	}
	return (0);
}

int	fil_figure(t_tet *temp, char cur_fig[4][4])
{
	int x;
	int y;

	x = 0;
	while (x < temp->size_x)
	{
		y = 0;
		while (y < temp->size_y)
		{
			if (cur_fig[x][y] != temp->tet[x][y])
			{
				x = 5;
				y = 5;
			}
			y++;
		}
		x++;
	}
	if ((x == temp->size_x) && (y = temp->size_y))
		return (1);
	return (0);
}
