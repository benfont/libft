/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitlopez <aitlopez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:40:57 by aitlopez          #+#    #+#             */
/*   Updated: 2022/10/04 20:32:06 by aitlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		new;
	int		i;
	int		j;

	j = 1;
	i = 0;
	new = 0;
	while (str[i] == ' ' || ((str[i] >= '\t' && (str[i] <= '\r'))))
			i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j = -j;
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		new = str[i] - '0' + (new * 10);
		if (str[i + 1] < '0' || str[i + 1] > '9')
			break ;
		i++;
	}
	return (new * j);
}
