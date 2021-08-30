/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 09:03:28 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/08/11 14:18:37 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	ft_valid_base_l(char *base, int l)
{
	int	i;
	int	ti;

	i = 0;
	ti = 1;
	while (i < l)
	{
		while (ti < l)
		{
			if (base[i] == base[ti])
				return (-1);
			ti++;
		}
		if (base[i] <= 32)
			return (-1);
		if (base[i] == '-' || base[i] == '+')
			return (-1);
		i++;
		ti = i + 1;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_number_is_neg(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	return (nbr);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	bl;
	int	t[50];
	int	rest;
	int	result;
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	bl = ft_valid_base_l(base, i);
	i = 0;
	result = nbr;
	rest = 0;
	if (bl <= 1)
		return ;
	nbr = ft_number_is_neg(nbr);
	while (result > 0)
	{
		rest = result % bl;
		result = result / bl;
		t[i++] = rest;
	}
	while (--i >= 0)
		ft_putchar(base[t[i]]);
}
