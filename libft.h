/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitlopez <aitlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:52:33 by aitlopez          #+#    #+#             */
/*   Updated: 2022/09/26 17:26:05 by aitlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

int 	ft_bzero(void *s, size_t n);
int 	ft_isalnum(int c);
int 	ft_isalpha (int c);
int 	ft_isascii(int c);
int 	ft_isdigit(int c);
int 	ft_isprint(int c);
void    *ft_memset(void *b, int c, size_t len);
size_t  ft_strlen(const char *s);

#endif
