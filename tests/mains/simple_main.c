/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schevall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 16:38:21 by schevall          #+#    #+#             */
/*   Updated: 2016/12/12 16:40:12 by schevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./gnl_test/get_next_line.h"
#include <libc.h>

int		main(int ac, char **av)
{
	int fd1;
	int ret;
	char *line;

	ret = 0;

	if (ac == 1)
		return (0);
	fd1 = open(av[1], O_RDONLY);

	while ((ret = get_next_line(fd1, &line)))
	{
		if (ret != 0)
		{
			write(1, line, ft_strlen(line));
		}
	}
	return (0);
}
