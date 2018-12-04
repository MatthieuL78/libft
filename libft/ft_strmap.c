/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 15:18:47 by malu              #+#    #+#             */
/*   Updated: 2018/11/27 18:34:55 by malu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strmap(char const *s, char (*f) (char))
{
	size_t	i;
	char	*new;
	size_t	size;

	i = 0;
	size = ft_strlen(s);
	if (!(new = malloc(sizeof(char) * size)))
		return (NULL);
	while (i < size)
	{
		new[i] = f(s[i]);
		i++;
	}
	return (new);
}
