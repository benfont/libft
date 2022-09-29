/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitlopez <aitlopez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:50:42 by aitlopez          #+#    #+#             */
/*   Updated: 2022/09/29 18:51:27 by aitlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char *)big);
	if (big == NULL && len == 0)
		return (NULL);
	while (big[i] != '\0' && i < len)
	{
		while (big[i + j] == little[j] && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (0);
}
