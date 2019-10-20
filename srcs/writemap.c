/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writemap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:53:59 by eboris            #+#    #+#             */
/*   Updated: 2019/10/20 19:52:10 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "writemap.h"

int	fil_write(t_tet *tet, char map[105][105])
{
	ft_putstr("Ok\n");
	ft_putnbr(tet->id);
	ft_putstr("\n\n");
	ft_putnbr(map[0][0]);
	ft_putstr("\n");
	ft_putnbr(map[0][1]);
	ft_putstr("\n");
	ft_putchar(map[1][1]);
	ft_putstr("\nEnd\n");
	return (1);
}
