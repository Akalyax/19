/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 12:18:37 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/09/08 20:25:07 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_size(int n)
{
	int	s;

	s = 0;
	if (n < 0)
		s++;
	if (s == 1)
		n = -n;
	while (n > 9)
	{
		s++;
		n /= 10;
	}
	return (s + 1);
}

char	*ft_itoa(int n)
{
	int				s;
	char			*str;
	int				i;
	unsigned int	nb;

	s = ft_size(n);
	str = malloc(s + 1);
	if (!str)
		return (NULL);
	i = 0;
	str[i] = '0';
	if (n < 0)
	{
		n = -n;
		str[i++] = '-';
	}
	nb = n;
	i = s - 1;
	while (nb != 0)
	{
		str[i--] = (nb % 10) + 48;
		nb /= 10;
	}
	str[s + 1] = '\0';
	return (str);
}
