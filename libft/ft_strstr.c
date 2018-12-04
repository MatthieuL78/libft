/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:26:19 by malu              #+#    #+#             */
/*   Updated: 2018/11/27 20:22:30 by malu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strstrcheck(char *context, const char *search)
{
	if (context[0] == '\0' && search[0] != '\0')
		return (1);
	if (search[0] == '\0')
		return (2);
	return (0);
}

char	*ft_strstr(char *context, const char *search)
{
	int i;
	int j;

	i = 0;
	if (ft_strstrcheck(context, search) == 1)
		return (NULL);
	if (ft_strstrcheck(context, search) == 2)
		return (context);
	while (context[i] != '\0')
	{
		j = 0;
		if (context[i] == search[0])
		{
			while (context[i + j] == search[j] && search[j])
				j++;
			if (search[j] == '\0')
			{
				while (i--)
					context++;
				return (context);
			}
		}
		i++;
	}
	return (NULL);
}
