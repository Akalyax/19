/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 10:26:03 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/08/16 10:53:41 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_find_next_prime(int nb)
{
	int	b;

	b = 3;
	if (nb == 2)
		return (nb);
	if (nb % 2 == 0)
		return (ft_find_next_prime(nb + 1));
	while (nb % b != 0)
		b++;
	if (b == nb)
		return (nb);
	return (ft_find_next_prime(nb + 2));
}
