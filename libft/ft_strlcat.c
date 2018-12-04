/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 18:47:30 by malu              #+#    #+#             */
/*   Updated: 2018/11/28 19:40:46 by malu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && i < size)
	{
		j++;
		i++;
	}
	if (ft_strlen(src) > size)
		return (ft_strlen(src) + size);
	if (ft_strlen(dest) == size)
		return (ft_strlen(dest) + ft_strlen(src));
	if (ft_strlen(src) < size)
		return (ft_strlen(src) + size);
	return (i);
}
