/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 15:24:23 by malu              #+#    #+#             */
/*   Updated: 2018/11/27 18:12:35 by malu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char *str, int index, size_t len)
{
	char	*new;
	int		i;

	i = 0;
	if (!(new = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (len)
	{
		new[i] = str[index + i];
		i++;
		len--;
	}
	new[i] = '\0';
	return (new);
}
