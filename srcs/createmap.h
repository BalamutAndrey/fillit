/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createmap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 20:18:26 by eboris            #+#    #+#             */
/*   Updated: 2019/10/21 19:59:04 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CREATEMAP_H
# define CREATEMAP_H

# include "main.h"
# include "writemap.h"

int	fil_new_map(t_tet *tet, int *figure, int fig_num);
int	fil_create_map(t_tet *tet, char map[105][105], int *figure, int fig_num);

#endif
