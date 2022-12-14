/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitlopez <aitlopez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:13:22 by aitlopez          #+#    #+#             */
/*   Updated: 2022/10/10 19:53:47 by aitlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	int		k;

	i = 0;
	k = ft_strlen(src);
	if (size > 0)
	{
		while ((src[i]) && (i < size -1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (k);
}
