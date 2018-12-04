/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 13:58:31 by malu              #+#    #+#             */
/*   Updated: 2018/12/01 12:48:27 by malu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (dest && n)
	{
		if (*(uint8_t*)src > 127)
		{
			*(uint8_t*)dest = *(uint8_t*)src;
			dest++;
			return ((uint8_t *)dest);
		}
		if (*(uint8_t*)src == c)
		{
			*(uint8_t*)dest = *(uint8_t*)src;
			dest++;
			return ((uint8_t *)dest);
		}
		*(uint8_t*)dest = *(uint8_t*)src;
		dest++;
		src++;
		n--;
	}
	if (dest == NULL)
		*(uint8_t*)src = *(uint8_t*)dest;
	return (NULL);
}
