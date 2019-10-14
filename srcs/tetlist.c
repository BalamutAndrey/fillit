/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetlist.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:50:44 by eboris            #+#    #+#             */
/*   Updated: 2019/10/11 15:14:26 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetlist.h"

int	fil_tetlist(t_tet *tet)
{
	t_tet	*temp;

	temp = NULL;
	if (tet == NULL)
		return (0);
	fil_wrttet(tet, 1, 3, 2);
	tet->tet[0][0] = '#';
	tet->tet[0][1] = '#';
	tet->tet[1][0] = '#';
	tet->tet[2][0] = '#';
	if ((temp = fil_wrttet(tet, 2, 3, 2)) == NULL)
		return (0);
	temp->tet[0][1] = '#';
	temp->tet[1][1] = '#';
	temp->tet[2][0] = '#';
	temp->tet[2][1] = '#';
	if ((temp = fil_wrttet(temp, 3, 2, 3)) == NULL)
		return (0);
	temp->tet[0][0] = '#';
	temp->tet[0][1] = '#';
	temp->tet[0][2] = '#';
	temp->tet[1][2] = '#';
	return (fil_tetlist_1(temp));
}

int	fil_tetlist_1(t_tet *temp)
{
	if ((temp = fil_wrttet(temp, 4, 2, 3)) == NULL)
		return (0);
	temp->tet[0][0] = '#';
	temp->tet[1][0] = '#';
	temp->tet[1][1] = '#';
	temp->tet[1][2] = '#';
	if ((temp = fil_wrttet(temp, 5, 3, 2)) == NULL)
		return (0);
	temp->tet[0][0] = '#';
	temp->tet[0][1] = '#';
	temp->tet[1][1] = '#';
	temp->tet[2][1] = '#';
	if ((temp = fil_wrttet(temp, 6, 3, 2)) == NULL)
		return (0);
	temp->tet[0][0] = '#';
	temp->tet[1][0] = '#';
	temp->tet[2][0] = '#';
	temp->tet[2][1] = '#';
	if ((temp = fil_wrttet(temp, 7, 2, 3)) == NULL)
		return (0);
	temp->tet[0][2] = '#';
	temp->tet[1][0] = '#';
	temp->tet[1][1] = '#';
	temp->tet[1][2] = '#';
	return (fil_tetlist_2(temp));
}

int	fil_tetlist_2(t_tet *temp)
{
	if ((temp = fil_wrttet(temp, 8, 2, 3)) == NULL)
		return (0);
	temp->tet[0][0] = '#';
	temp->tet[0][1] = '#';
	temp->tet[0][2] = '#';
	temp->tet[1][0] = '#';
	if ((temp = fil_wrttet(temp, 9, 2, 3)) == NULL)
		return (0);
	temp->tet[0][0] = '#';
	temp->tet[0][1] = '#';
	temp->tet[1][1] = '#';
	temp->tet[1][2] = '#';
	if ((temp = fil_wrttet(temp, 10, 3, 2)) == NULL)
		return (0);
	temp->tet[0][1] = '#';
	temp->tet[1][0] = '#';
	temp->tet[1][1] = '#';
	temp->tet[2][0] = '#';
	if ((temp = fil_wrttet(temp, 11, 2, 3)) == NULL)
		return (0);
	temp->tet[0][1] = '#';
	temp->tet[0][2] = '#';
	temp->tet[1][0] = '#';
	temp->tet[1][1] = '#';
	return (fil_tetlist_3(temp));
}

int	fil_tetlist_3(t_tet *temp)
{
	if ((temp = fil_wrttet(temp, 12, 3, 2)) == NULL)
		return (0);
	temp->tet[0][0] = '#';
	temp->tet[1][0] = '#';
	temp->tet[1][1] = '#';
	temp->tet[2][1] = '#';
	if ((temp = fil_wrttet(temp, 13, 3, 2)) == NULL)
		return (0);
	temp->tet[0][0] = '#';
	temp->tet[1][0] = '#';
	temp->tet[1][1] = '#';
	temp->tet[2][0] = '#';
	if ((temp = fil_wrttet(temp, 14, 3, 2)) == NULL)
		return (0);
	temp->tet[0][1] = '#';
	temp->tet[1][0] = '#';
	temp->tet[1][1] = '#';
	temp->tet[2][1] = '#';
	if ((temp = fil_wrttet(temp, 15, 2, 3)) == NULL)
		return (0);
	temp->tet[0][0] = '#';
	temp->tet[0][1] = '#';
	temp->tet[0][2] = '#';
	temp->tet[1][1] = '#';
	return (fil_tetlist_4(temp));
}

int	fil_tetlist_4(t_tet *temp)
{
	if ((temp = fil_wrttet(temp, 16, 2, 3)) == NULL)
		return (0);
	temp->tet[0][1] = '#';
	temp->tet[1][0] = '#';
	temp->tet[1][1] = '#';
	temp->tet[1][2] = '#';
	if ((temp = fil_wrttet(temp, 17, 1, 4)) == NULL)
		return (0);
	temp->tet[0][0] = '#';
	temp->tet[0][1] = '#';
	temp->tet[0][2] = '#';
	temp->tet[0][3] = '#';
	if ((temp = fil_wrttet(temp, 18, 4, 1)) == NULL)
		return (0);
	temp->tet[0][0] = '#';
	temp->tet[1][0] = '#';
	temp->tet[2][0] = '#';
	temp->tet[3][0] = '#';
	if ((temp = fil_wrttet(temp, 19, 2, 2)) == NULL)
		return (0);
	temp->tet[0][0] = '#';
	temp->tet[0][1] = '#';
	temp->tet[1][0] = '#';
	temp->tet[1][1] = '#';
	return (1);
}
