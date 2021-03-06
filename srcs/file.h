/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:22:16 by eboris            #+#    #+#             */
/*   Updated: 2019/10/20 18:38:58 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H

# include "main.h"
# include "tetlist.h"
# include "checktet.h"
# include "createmap.h"

int	fil_open(char *filename);
int	fil_read(int fd, t_tet *tet);
#endif
