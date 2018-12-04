/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:33:58 by malu              #+#    #+#             */
/*   Updated: 2018/11/28 18:50:17 by malu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (*(uint8_t*)s1 == '\0')
		return (-*(uint8_t*)s2);
	else if (*(uint8_t*)s2 == '\0')
		return (*(uint8_t*)s1);
	while (*(uint8_t*)s1++ != '\0' && *(uint8_t*)s2++ != '\0' && n)
	{
		if (*(uint8_t*)s1 - *(uint8_t*)s2 != 0)
			return (*(uint8_t*)s1 - *(uint8_t*)s2);
		n--;
	}
	return (0);
}
