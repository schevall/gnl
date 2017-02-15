/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schevall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 16:38:21 by schevall          #+#    #+#             */
/*   Updated: 2016/12/12 16:39:38 by schevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./gnl_test/get_next_line.h"
#include <libc.h>

int		main(int ac, char **av)
{
	int fd1;
//	int fd2;
//	int fd3;
	char *line;
	int index1;
//	int index2;
//	int index3;

	index1 = 1;
//	index2 = 1;
//	index3 = 1;
	if (ac == 1)
		return (0);
	fd1 = open(av[1], O_RDONLY);
//	fd2 = open(av[2], O_RDONLY);
//	fd3 = open(av[3], O_RDONLY);

	while (get_next_line(fd1, &line) == 1)
	{
		printf("\nLe resultat est de la ligne[%d] est :\n", index1++);
		ft_putendl(line);
	}
/**

	printf("\nfile 1, line [%d]\n", index1++);
	get_next_line(fd1, &line);
	ft_putendl(line);
	
	printf("\nfile 2, line [%d]\n", index2++);
	get_next_line(fd2, &line);
	ft_putendl(line);

	printf("\nfile 1, line [%d]\n", index1++);
	get_next_line(fd1, &line);
	ft_putendl(line);

	printf("\nfile 3, line [%d]\n", index3++);
	get_next_line(fd3, &line);
	ft_putendl(line);

	printf("\nfile 1, line [%d]\n", index1++);
	get_next_line(fd1, &line);
	ft_putendl(line);
	
	printf("\nfile 2, line [%d]\n", index2++);
	get_next_line(fd2, &line);
	ft_putendl(line);
	
	printf("\nfile 3, line [%d]\n", index3++);
	get_next_line(fd3, &line);
	ft_putendl(line);
**/

	return (0);
}
