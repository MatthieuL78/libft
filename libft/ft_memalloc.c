/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 15:02:43 by malu              #+#    #+#             */
/*   Updated: 2018/12/01 15:06:25 by malu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(void *value, size_t size)
{
	if (!(value = malloc(sizeof(value) * size)))
		return (NULL);
	while (size)
	{
		*(char*)value = 0;
		size--;
		value++;
	}
	return (value);
}
