/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitlopez <aitlopez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 20:10:19 by aitlopez          #+#    #+#             */
/*   Updated: 2022/09/28 20:33:32 by aitlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;
	size_t	j;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = len_dst;
	if (dst == src)
		return (0);
	if (dstsize != 0 && i < (dstsize - 1))
	{
		j = 0;
		while (i < (dstsize - 1) && src[j] != '\0')
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	if (len_dst > dstsize)
		return (dstsize + len_src);
	return (len_dst + len_src);
}
