/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 12:25:37 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/09/01 14:59:08 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	while (n-- > 0)
		*d++ = *s++;
	return (dst);
}
