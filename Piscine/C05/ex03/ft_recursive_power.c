/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:45:07 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/08/16 10:22:47 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
