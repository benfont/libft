/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitlopez <aitlopez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:31:27 by aitlopez          #+#    #+#             */
/*   Updated: 2022/10/10 18:38:58 by aitlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*newlist;
	void		*temp;
	t_list		*start;

	if (!lst || !f)
		return (NULL);
	start = NULL;
	while (lst)
	{
		temp = f(lst->content);
		newlist = ft_lstnew(temp);
		if (!(newlist))
		{
			del(temp);
			ft_lstclear(&start, del);
			return (0);
		}
		ft_lstadd_back(&start, newlist);
		lst = lst->next;
	}
	return (start);
}
