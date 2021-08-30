/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 08:59:34 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/08/11 08:59:40 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	stock[10];
	int		index;
	int		firstnbr;

	firstnbr = 0;
	index = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	while (index <= 9)
	{
		stock[9 - index] = nb % 10;
		nb = nb / 10;
		index++;
	}
	index = -1;
	while (++index <= 9)
	{
		if (stock[index] != 0)
			firstnbr = 1;
		if (firstnbr == 1)
			ft_putchar(stock[index] + '0');
	}
}
