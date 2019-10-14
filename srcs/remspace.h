/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remspace.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:16:15 by eboris            #+#    #+#             */
/*   Updated: 2019/10/13 19:16:59 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REMSPACE_H
# define REMSPACE_H

# include "main.h"

int	fil_remspace_y1(char cur_fig[4][4], int *x, int *y);
int	fil_remspace_y2(char cur_fig[4][4], int *x, int *y);
int fil_remspace_y3(char cur_fig[4][4], int *x, int *y);
int fil_remspace_x1(char cur_fig[4][4], int *x);
int fil_remspace_x2(char cur_fig[4][4], int *x);
int fil_remspace_x3(char cur_fig[4][4], int *x);

#endif
