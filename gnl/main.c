#include "get_next_line.h"

int	main(void)
{
	char	*line;
	int ret;

	while ((ret = get_next_line(0, &line)) > 0)
		ft_putendl(line);
	ft_putnbr(ret);
	return (0);
}
