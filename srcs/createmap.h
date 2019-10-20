/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createmap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 20:18:26 by eboris            #+#    #+#             */
/*   Updated: 2019/10/20 19:26:09 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CREATEMAP_H
# define CREATEMAP_H

# include "main.h"
# include "writemap.h"

int	fil_new_map(t_tet *tet, int *figure, int fig_num);
int	fil_create_map(char *map[105], int *figure, int map_size, int fig_num);

#endif
