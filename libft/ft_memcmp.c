/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:42:56 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/09/08 16:28:42 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				v;

	str1 = s1;
	str2 = s2;
	v = 0;
	if (n == 0)
		return (str1[v] - str2[v]);
	while (v < n - 1 && str1[v] == str2[v])
		v++;
	return (str1[v] - str2[v]);
}
