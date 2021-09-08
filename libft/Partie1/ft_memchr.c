/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:08:19 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/09/01 16:42:45 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				x;

	x = 0;
	str = s;
	if (n == 0)
		return (0);
	while (str[x] != c && x < n - 1)
		x++;
	if (str[x] == c)
		return ((char *)str + x);
	return (0);
}
