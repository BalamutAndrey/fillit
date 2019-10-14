/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checktet.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:19:35 by eboris            #+#    #+#             */
/*   Updated: 2019/10/13 19:43:48 by eboris           ###   ########.fr       */
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
	int		n;
	int		m;
	t_tet	*temp;

	temp = tet;
	fil_remspace_y1(cur_fig, &x, &y);
	while (temp != NULL)
	{
		n = 0;
		while (n < x)
		{
			m = 0;
			while (m < y)
			{
				if (cur_fig[n][m] != temp->tet[n][m])
				{
					n = 5;
					m = 5;
				}
				m++;
			}
			n++;
		}
		if ((n == x) && (m == y) && (x == temp->size_x) && (y == temp->size_y))
		{
			figure[fig_num] = temp->id;
			return (1);
		}
		temp = temp->next;
	}
	return (0);
}
