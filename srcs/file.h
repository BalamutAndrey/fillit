/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:22:16 by eboris            #+#    #+#             */
/*   Updated: 2019/10/11 15:47:55 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H

# include "main.h"
# include "tetlist.h"
# include "checktet.h"

int	fil_open(char *filename);
int	fil_read(int fd, t_tet *tet);
#endif
