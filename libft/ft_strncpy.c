/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:17:42 by malu              #+#    #+#             */
/*   Updated: 2018/12/01 15:04:50 by malu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strncpy_dest_manage(char *dest, char c, size_t i, size_t n, size_t temp)
{
	if (i < n)
	{
		while (i < n)
		{
			dest[i] = c;
			i++;
		}
	}
	else
	{
		while (i-- > 0)
			dest++;
		ft_bzero(dest, temp + 1);
	}
}

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	temp;
	char	*result;

	i = 0;
	result = dest;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	temp = i;
	if (src[i] == '\0')
		ft_strncpy_dest_manage(dest, src[temp], i, n, temp);
	return (result);
}
