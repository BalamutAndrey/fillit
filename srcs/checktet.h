/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checktet.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:28:29 by eboris            #+#    #+#             */
/*   Updated: 2019/10/13 17:18:10 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKTET_H
# define CHECKTET_H

# include "main.h"
# include "remspace.h"

int	fil_checklist(t_tet *tet);
int	fil_checkcurr(t_tet *tet, char c_tet[20], int *figure, int fig_num);
int	fil_remspace(t_tet *tet, char cur_fig[4][4], int *figure, int fig_num);

#endif
