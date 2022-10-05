/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitlopez <aitlopez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:04:02 by aitlopez          #+#    #+#             */
/*   Updated: 2022/10/04 19:11:19 by aitlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(nitems * size);
	if (str == 0)
		return (0);
	while (i < nitems * size)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}
