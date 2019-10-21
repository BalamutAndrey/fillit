/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writemap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 18:39:57 by eboris            #+#    #+#             */
/*   Updated: 2019/10/21 21:37:55 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRITEMAP_H
# define WRITEMAP_H

# include "main.h"

int	fil_write(t_tet *tet, char map[105][105], int figure);
int	fil_write_check(t_tet *tet, char map[105][105], int x, int y);
int	fil_write_figure(t_tet *tet, char map[105][105]);

#endif
