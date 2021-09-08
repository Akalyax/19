/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 11:14:56 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/09/08 20:16:41 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_is_set(char c, char const *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_is_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (s1[end - 1] && ft_is_set(s1[end - 1], set))
		end--;
	if (end <= start)
		end = start;
	str = malloc(end - start + 1);
	if (!str)
		return (NULL);
	str = ft_substr(s1, start, end - start);
	return (str);
}
