/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:26:37 by eboris            #+#    #+#             */
/*   Updated: 2019/10/09 17:27:28 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(int argc, char **argv)
{
	int	result;

	if (argc != 2)
	{
		ft_putstr("usage: fillit source_file\n");
		return (0);
	}
	result = fil_open(argv[1]);
	if (result != 1)
	{
		ft_putstr("error\n");
		return (0);
	}
	close(result);
	return (0);
}
