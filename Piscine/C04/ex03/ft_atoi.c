/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 09:00:08 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/08/11 09:01:07 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_char_is_number(char c)
{
	if (c < 48 || c > 57)
		return (0);
	return (1);
}

int	ft_is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v'
		|| c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	index;
	int	negativity;
	int	returning;

	index = 0;
	negativity = 0;
	returning = 0;
	while ((ft_is_space(str[index]) == 1) && str[index])
		index++;
	while ((ft_char_is_number(str[index]) == 0) && str[index])
	{
		if (str[index] == '-')
			negativity++;
		else if (str[index] == '+')
		{
		}
		else
			return (0);
		index++;
	}
	while ((ft_char_is_number(str[index]) == 1) && str[index])
		returning = (returning * 10) + (str[index++] - 48);
	if ((negativity % 2) == 1)
		returning *= -1;
	return (returning);
}
