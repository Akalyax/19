/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:51:15 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/09/02 09:20:01 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int	x;

	x = 0;
	while (s[x])
		x++;
	while (s[x] != c && x > 0)
		x--;
	if (s[x] == '\0' || s[x] == c)
		return ((char *)s + x);
	return (0);
}

int	main(int c, char **v)
{
	(void)c;
	printf("%s\n", ft_strrchr(v[1], v[2][0]));
	printf("%s\n", strrchr(v[1], v[2][0]));
}
