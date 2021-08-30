/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:17:42 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/08/16 10:22:37 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	p;
	int	nbbase;

	p = 1;
	nbbase = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (p++ < power)
		nb *= nbbase;
	return (nb);
}
