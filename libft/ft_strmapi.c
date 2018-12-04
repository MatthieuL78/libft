/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 15:20:08 by malu              #+#    #+#             */
/*   Updated: 2018/11/27 18:29:05 by malu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		new[i] = s[i];
		i++;
	}
	while (i < size)
	{
		new[i] = f(i, new[i]);
		s++;
		i++;
	}
	return (new);
}
