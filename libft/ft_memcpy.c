/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 13:56:10 by malu              #+#    #+#             */
/*   Updated: 2018/11/27 18:38:32 by malu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t size;

	size = n;
	while (n)
	{
		*(char *)dest = *(char *)src;
		src++;
		dest++;
		n--;
	}
	while (n < size)
	{
		dest--;
		n++;
	}
	return (dest);
}
