/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 19:16:56 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/08/16 10:47:03 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	b;

	b = 3;
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (b * b <= nb)
	{
		if (nb % b == 0)
			return (0);
		b = b + 2;
	}
	return (1);
}
