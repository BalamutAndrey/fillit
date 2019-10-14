/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:32:30 by eboris            #+#    #+#             */
/*   Updated: 2019/10/09 18:13:45 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include "../libft/libft.h"

typedef struct		s_tet
{
	int				id;
	int				size_x;
	int				size_y;
	char			tet[4][4];
	struct s_tet	*next;
}					t_tet;

int					main(int argc, char **argv);
int					fil_open(char *filename);

#endif
