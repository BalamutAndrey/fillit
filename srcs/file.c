/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:39:53 by eboris            #+#    #+#             */
/*   Updated: 2019/10/14 18:14:15 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

int			fil_open(char *filename)
{
	t_tet	*tet;
	int		result;
	int		fd;

	fd = open(filename, O_RDONLY);
	result = read(fd, NULL, 0);
	tet = malloc(sizeof(t_tet));
	if (tet == NULL)
		return (0);
	if ((result < 0) || (fd < 0))
		return (0);
	if ((fil_tetlist(tet) != 1) && (fil_checklist(tet) != 1))
		return (0);
	fil_read(fd, tet);
	return (1);
}

int			fil_read(int fd, t_tet *tet)
{
	int		read_result;
	int		*figure;
	int		fig_num;
	char	*c_tet;

	read_result = 1;
	fig_num = -1;
	figure = malloc(sizeof(int) * 25);
	while (read_result == 1)
	{
		c_tet = malloc(sizeof(char) * (20));
		read_result = read(fd, c_tet, 20);
		if ((read_result != 20) ||
				(fil_checkcurr(tet, &c_tet[0], figure, fig_num) == 0))
			return (0);
		fig_num++;
		free(c_tet);
		c_tet = malloc(sizeof(char));
		read_result = read(fd, c_tet, 1);
		if ((read_result != 0) && (c_tet[0] != '\n'))
			return (0);
		free(c_tet);
	}
	ft_putstr("ok.\n");
	return (1);
}
