/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 11:03:18 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/09/03 11:14:07 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		c1;
	int		c2;
	char	*tab;

	c1 = 0;
	c2 = 0;
	tab = NULL;
	while (s1[c1])
		c1++;
	while (s2[c2])
		c2++;
	if (c1 == 0 && c2 == 0)
		return (NULL);
	tab = malloc(c1 + c2);
	c1 = 0;
	while (*s1)
		tab[c1++] = *s1++;
	while (*s2)
		tab[c1++] = *s2++;
	tab[c1] = '\0';
	return (tab);
}
