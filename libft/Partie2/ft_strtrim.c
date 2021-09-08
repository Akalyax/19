/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 11:14:56 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/09/04 11:10:38 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_set(char c, char const *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		index;
	char	*tab;
	int		x;

	x = 0;
	tab = NULL;
	index = 0;
	len = 0;
	while (s1[len])
		len++;
	while (s1[index] && ft_is_set(s1[index], set))
		index++;
	len--;
	while (s1[len] && ft_is_set(s1[len], set))
		len--;
	if (len - index <= 0)
		return (0);
	tab = malloc(len - index);
	if (!tab)
		return (NULL);
	while (index <= len)
		tab[x++] = s1[index++];
	return (tab);
}
