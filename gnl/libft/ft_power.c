/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schevall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 14:47:28 by schevall          #+#    #+#             */
/*   Updated: 2016/11/19 15:14:25 by schevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_power(int nb, int power)
{
	int res;

	res = 1;
	if (power < 0)
	{
		while (power != 0)
		{
			res = res / nb;
			power++;
		}
	}
	else
	{
		while (power)
		{
			res = res * nb;
			power--;
		}
	}
	return (res);
}
