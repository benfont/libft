/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitlopez <aitlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:20:39 by aitlopez          #+#    #+#             */
/*   Updated: 2022/09/29 18:06:27 by aitlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*voidptr;

	i = 0;
	voidptr = (unsigned char *)s;
	while (i < n)
	{
		voidptr[i] = 0;
		i++;
	}
}
