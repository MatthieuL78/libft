/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 18:13:11 by malu              #+#    #+#             */
/*   Updated: 2018/11/27 18:45:04 by malu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*trim_str;
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			count++;
		i++;
	}
	if (!(trim_str = malloc(sizeof(char) * count + 1)))
		return (NULL);
	i = 0;
	while (j < count)
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
		{
			trim_str[j] = s[i];
			j++;
		}
		i++;
	}
	trim_str[j] = '\0';
	return (trim_str);
}
