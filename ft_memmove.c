/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitlopez <aitlopez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:31:02 by aitlopez          #+#    #+#             */
/*   Updated: 2022/10/09 19:39:06 by aitlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;

	i = 0;
	ptrdest = (unsigned char *)dst;
	ptrsrc = (unsigned char *)src;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (ptrdest < ptrsrc)
		ft_memcpy(dst, src, len);
	else
	{
		while (i < len)
		{
			ptrdest[len - 1 - i] = ptrsrc[len -1 - i];
			i++;
		}
	}
	return (ptrdest);
}

/*
int	main()
{
	char dest[15] ="oldstring";
	const char src[] = "a mi me pparece igual no se";

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 5);
	printf("After memmove dest = %s, src = %s\n", dest, src);

	return (0);
}
*/
