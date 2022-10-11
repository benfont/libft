/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitlopez <aitlopez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:32:17 by aitlopez          #+#    #+#             */
/*   Updated: 2022/10/09 19:12:43 by aitlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (ft_strlen(s) > (start + j) && j < len)
		j++;
	dest = (char *)malloc(sizeof(char) * (j + 1));
	if (!dest)
		return (NULL);
	while (i < j)
	{
		dest[i] = s[i + start];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/*
int	main()
{
	char src[] = "substr function implementation";
	int m = 7;
	int n = 12;

	char* dest = ft_substr(src, m, n);
	printf("%s\n", dest);
	return (0);
}
*/
