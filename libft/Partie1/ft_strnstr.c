/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 20:09:16 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/09/02 09:16:54 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	x;
	size_t	a;
	size_t	b;

	a = 0;
	x = 0;
	b = 0;
	while (s2[x])
		x++;
	while (s1[a] && a < n)
	{
		while (s1[a++] == s2[b] && b < x)
			b++;
		if (b == x)
			return ((char *)s1 + (a - b - 1));
		b = 0;
	}
	if (x == 0)
		return ((char *)s1);
	return (0);
}
