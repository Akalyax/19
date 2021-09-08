/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 21:07:37 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/09/08 16:33:12 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	neg;
	int	nbr;
	int	x;

	nbr = 0;
	neg = 1;
	x = 0;
	while ((nptr[x] >= 9 && nptr[x] <= 13) || (nptr[x] == 32))
		x++;
	if (nptr[x] == '-' || nptr[x] == '+')
		if (nptr[x++] == '-')
			neg = -neg;
	while (nptr[x] >= '0' && nptr[x] <= '9')
		nbr = nbr * 10 + (nptr[x++] - 48);
	return (nbr * neg);
}
