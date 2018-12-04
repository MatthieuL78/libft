/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:07:56 by malu              #+#    #+#             */
/*   Updated: 2018/12/01 13:17:58 by malu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	while (s && n)
	{
		if (*(char*)s == c)
			return (s);
		s++;
		n--;
	}
	if (s == NULL)
		(*(char*)s = c);
	return (NULL);
}

