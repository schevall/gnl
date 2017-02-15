/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schevall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 16:38:21 by schevall          #+#    #+#             */
/*   Updated: 2016/12/12 16:39:56 by schevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./gnl_test/get_next_line.h"
#include <libc.h>

int		main(int ac, char **av)
{
	int fd1;
	int fd2;
	int fd3;
	int fd4;
	char *line;
	int index1;
	int index2;
	int index3;
	int index4;


	int ret;

	ret = 0;

	index1 = 1;
	index2 = 1;
	index3 = 1;
	index4 = 1;
	if (ac == 1)
		return (0);
	fd1 = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_RDONLY);
	fd3 = open(av[3], O_RDONLY);
	fd4 = open(av[4], O_RDONLY);

	printf("BUFF SIZE IS [%d]\n\n", BUFF_SIZE);

	printf("TEST MULTI FD\n");

	ret = get_next_line(fd1, &line);
	printf("\nRESULT ret = [%d] file 1, line [%d]\n", ret, index1++);
	ft_putendl(line);
	
	ret = get_next_line(fd2, &line);
	printf("\nRESULT file 2, ret = [%d] line [%d]\n", ret, index2++);
	ft_putendl(line);

	ret = get_next_line(fd2, &line);
	printf("\nRESULT file 2, ret = [%d] line [%d]\n", ret, index2++);
	ft_putendl(line);

	ret = get_next_line(fd2, &line);
	printf("\nRESULT file 2, ret = [%d] line [%d]\n", ret, index2++);
	ft_putendl(line);

	ret = get_next_line(fd1, &line);
	printf("\nRESULT file 1, ret = [%d] line [%d]\n", ret, index1++);
	ft_putendl(line);

	ret = get_next_line(fd3, &line);
	printf("\nRESULT file 3, ret = [%d] line [%d]\n", ret, index3++);
	ft_putendl(line);

	ret = get_next_line(fd1, &line);
	printf("\nRESULT file 1, ret = [%d] line [%d]\n", ret, index1++);
	ft_putendl(line);
	
	ret = get_next_line(fd2, &line);
	printf("\nRESULT file 2, ret = [%d] line [%d]\n", ret, index2++);
	ft_putendl(line);
	
	ret = get_next_line(fd3, &line);
	printf("\n RESULT file 3, ret = [%d] line [%d]\n", ret, index3++);
	ft_putendl(line);

	printf("\nTEST ON FILE WITHOUTH LAST n\n");

	ret = get_next_line(fd4, &line);
	printf("\n RESULT file 4, ret = [%d] line [%d]\n", ret, index4++);
	ft_putendl(line);

	ret = get_next_line(fd4, &line);
	printf("\n RESULT file 4, ret = [%d] line [%d]\n", ret, index4++);
	ft_putendl(line);

	ret = get_next_line(fd4, &line);
	printf("\n RESULT file 4, ret = [%d] line [%d]\n", ret, index4++);
	ft_putendl(line);

	return (0);
}
