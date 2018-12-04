/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:29:43 by malu              #+#    #+#             */
/*   Updated: 2018/11/28 18:44:50 by malu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	if (*(uint8_t*)s1 == '\0')
		return (-*(uint8_t*)s2);
	else if (*(uint8_t*)s2 == '\0')
		return (*(uint8_t*)s1);
	while (*(uint8_t*)s1++ != '\0' && *(uint8_t*)s2++ != '\0')
	{
		if (*(uint8_t*)s1 - *(uint8_t*)s2 != 0)
			return (*(uint8_t*)s1 - *(uint8_t*)s2);
	}
	return (0);
}