/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 15:04:23 by malu              #+#    #+#             */
/*   Updated: 2018/11/24 17:47:52 by malu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strnew(char *str, size_t size)
{
	if (!(str = malloc(sizeof(char) * size)))
		return (NULL);
	while (size)
	{
		*(char*)str = '\0';
		size--;
		str++;
	}
	return (str);
}
