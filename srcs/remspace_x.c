/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remspace_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:07:58 by eboris            #+#    #+#             */
/*   Updated: 2019/10/14 16:28:09 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "remspace.h"

int	fil_remspace_x1(char cur_fig[4][4], int *x)
{
	if ((cur_fig[3][0] == '.') && (cur_fig[3][1] == '.') &&
			(cur_fig[3][2] == '.') && (cur_fig[3][3] == '.'))
	{
		*x = *x - 1;
	}
	if ((cur_fig[2][0] == '.') && (cur_fig[2][1] == '.') &&
			(cur_fig[2][2] == '.') && (cur_fig[2][3] == '.'))
	{
		if (((cur_fig[3][0] == '#') || (cur_fig[3][1] == '#') ||
					(cur_fig[3][2] == '#') || (cur_fig[3][3] == '#')) &&
					((cur_fig[1][0] == '#') || (cur_fig[1][1] == '#') ||
					(cur_fig[1][2] == '#') || (cur_fig[1][3] == '#')))
			return (0);
		cur_fig[2][0] = cur_fig[3][0];
		cur_fig[2][1] = cur_fig[3][1];
		cur_fig[2][2] = cur_fig[3][2];
		cur_fig[2][3] = cur_fig[3][3];
		cur_fig[3][0] = '.';
		cur_fig[3][1] = '.';
		cur_fig[3][2] = '.';
		cur_fig[3][3] = '.';
		*x = *x - 1;
	}
	return (fil_remspace_x2(cur_fig, x));
}

int	fil_remspace_x2(char cur_fig[4][4], int *x)
{
	if ((cur_fig[1][0] == '.') && (cur_fig[1][1] == '.') &&
			(cur_fig[1][2] == '.') && (cur_fig[1][3] == '.'))
	{
		if (((cur_fig[0][0] == '#') || (cur_fig[0][1] == '#') ||
					(cur_fig[0][2] == '#') || (cur_fig[0][3] == '#')) &&
					((cur_fig[2][0] == '#') || (cur_fig[2][1] == '#') ||
					(cur_fig[2][2] == '#') || (cur_fig[2][3] == '#')))
			return (0);
		cur_fig[1][0] = cur_fig[2][0];
		cur_fig[1][1] = cur_fig[2][1];
		cur_fig[1][2] = cur_fig[2][2];
		cur_fig[1][3] = cur_fig[2][3];
		cur_fig[2][0] = cur_fig[3][0];
		cur_fig[2][1] = cur_fig[3][1];
		cur_fig[2][2] = cur_fig[3][2];
		cur_fig[2][3] = cur_fig[3][3];
		cur_fig[3][0] = '.';
		cur_fig[3][1] = '.';
		cur_fig[3][2] = '.';
		cur_fig[3][3] = '.';
		*x = *x - 1;
	}
	return (fil_remspace_x3(cur_fig, x));
}

int	fil_remspace_x3(char cur_fig[4][4], int *x)
{
	if ((cur_fig[0][0] == '.') && (cur_fig[0][1] == '.') &&
			(cur_fig[0][2] == '.') && (cur_fig[0][3] == '.'))
	{
		cur_fig[0][0] = cur_fig[1][0];
		cur_fig[0][1] = cur_fig[1][1];
		cur_fig[0][2] = cur_fig[1][2];
		cur_fig[0][3] = cur_fig[1][3];
		cur_fig[1][0] = cur_fig[2][0];
		cur_fig[1][1] = cur_fig[2][1];
		cur_fig[1][2] = cur_fig[2][2];
		cur_fig[1][3] = cur_fig[2][3];
		cur_fig[2][0] = cur_fig[3][0];
		cur_fig[2][1] = cur_fig[3][1];
		cur_fig[2][2] = cur_fig[3][2];
		cur_fig[2][3] = cur_fig[3][3];
		cur_fig[3][0] = '.';
		cur_fig[3][1] = '.';
		cur_fig[3][2] = '.';
		cur_fig[3][3] = '.';
		*x = *x - 1;
	}
	return (1);
}
