/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <sbaeyens@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:06:52 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/08/31 12:32:06 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	if (nb == 1)
		return (nb);
	if (nb <= 0 || nb >= 13)
		return (0);
	return (nb = nb * ft_recursive_factorial(nb - 1));
}
