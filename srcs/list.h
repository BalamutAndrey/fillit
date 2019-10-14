/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:23:52 by eboris            #+#    #+#             */
/*   Updated: 2019/10/11 15:03:16 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include "main.h"

t_tet	*fil_wrttet(t_tet *tet, int id, int x, int y);
int		fil_newlst(t_tet *new, int id, int x, int y);

#endif
