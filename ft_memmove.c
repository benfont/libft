/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitlopez <aitlopez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:31:02 by aitlopez          #+#    #+#             */
/*   Updated: 2022/09/28 18:52:15 by aitlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*voidptr_dst;
	unsigned char	*voidptr_src;

	i = 0;
	voidptr_dst = (unsigned char *)dst;
	voidptr_src = (unsigned char *)src;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (voidptr_dst < voidptr_src)
	{
		while (i < n)
		{
			voidptr_dst[i] = voidptr_src[i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			voidptr_dst [n - 1 - i] = voidptr_src[n - 1 - i];
			i++;
		}
	}
	return (voidptr_dst);
}
