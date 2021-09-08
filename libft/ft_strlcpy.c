/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:07:04 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/09/08 20:02:56 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	size;

	size = 0;
	if (!src || !dst)
		return (0);
	while (dstsize-- > 1 && *src && *dst)
	{
		*dst++ = *src++;
		size++;
	}
	*dst = '\0';
	return (size);
}
