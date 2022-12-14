/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitlopez <aitlopez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:13:02 by aitlopez          #+#    #+#             */
/*   Updated: 2022/09/29 17:48:22 by aitlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*voidptr;

	i = 0;
	voidptr = (unsigned char *)s;
	while (i < n)
	{
		voidptr[i] = c;
		i++;
	}
	return (s);
}
