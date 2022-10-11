/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitlopez <aitlopez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:23:50 by aitlopez          #+#    #+#             */
/*   Updated: 2022/10/09 18:52:03 by aitlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trim_left(char const *s1, char const *set)
{
	int		i;
	int		start;

	start = 0;
	i = 0;
	while (set[i])
	{
		if (set[i] == s1[start])
		{
			start++;
			i = -1;
		}
		i++;
	}
	return (start);
}

static int	trim_right(char const *s1, char const *set, int start)
{
	int		i;
	int		end;

	end = ft_strlen(s1);
	i = 0;
	while (set[i] && end > start)
	{
		if (set[i] == s1[end - 1])
		{
			end--;
			i = -1;
		}
		i++;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	int		size;
	char	*str;

	i = 0;
	start = trim_left(s1, set);
	end = trim_right(s1, set, start);
	size = end - start;
	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < size)
	{
		str[i++] = s1[start++];
	}
	str[i] = 0;
	return (str);
}

/*
int		main(void)
{
	char s1[] = " \t \t \n a \n\n\n\t";
	char set[] = " \n\t";

	puts(ft_strtrim(s1, set));
}
*/
