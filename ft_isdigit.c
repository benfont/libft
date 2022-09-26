/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitlopez <aitlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:52:27 by aitlopez          #+#    #+#             */
/*   Updated: 2022/09/26 17:17:48 by aitlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
    return(c >= 0 && c <= 9);
}

/*
int main(void)
{
    printf("%d", ft_isdigit(5));
}
*/
