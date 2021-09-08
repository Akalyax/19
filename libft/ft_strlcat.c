/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:17:35 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/09/08 16:30:39 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		t1;
	size_t		t2;
	char		*d;
	const char	*s;

	s = src;
	d = dst;
	t1 = dstsize;
	while (*d && t1-- != 0)
		d++;
	t2 = d - dst;
	t1 = dstsize - t2;
	if (t1 <= 0)
		return (t2 + ft_strlen(src));
	while (*s)
	{
		if (t1 > 1)
		{
			*d++ = *s;
			t1--;
		}
		s++;
	}
	*d = '\0';
	return (t2 + (s - src));
}
