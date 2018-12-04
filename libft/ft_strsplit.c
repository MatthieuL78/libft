/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 18:52:04 by malu              #+#    #+#             */
/*   Updated: 2018/11/27 18:44:25 by malu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_beginskip(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] == c)
		i++;
	return (i);
}

size_t	ft_wordsize(char const *s, char c, size_t index)
{
	size_t i;

	i = index;
	while (s[i] != c && i < ft_strlen(s))
		i++;
	return (i - index);
}

int		ft_numberofwords(char const *s, char c)
{
	size_t	i;
	int		numberofwords;

	i = ft_beginskip(s, c);
	numberofwords = 0;
	while (s[i] != '\0' && i < ft_strlen(s))
	{
		while (ft_isalpha(s[i]) == 1024)
			i++;
		if ((s[i] == c || s[i] == '\0') && ft_isalpha(s[i - 1]) == 1024)
			numberofwords++;
		i++;
	}
	return (numberofwords);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	int		j;
	int		k;
	char	**string_array;

	i = 0;

	j = 0;
	if (!(string_array = malloc(sizeof(char*) * ft_numberofwords(s, c))))
		return (NULL);
	while (s[i] != '\0' && i < ft_strlen(s))
	{
		k = 0;
		if (ft_isalpha(s[i]) == 1024)
		{
			if (!(string_array[j] = malloc(sizeof(char) * ft_wordsize(s, c, i) + 1)))
				return (NULL);
			while (ft_isalpha(s[i]) == 1024 && i < ft_strlen(s))
			{
				string_array[j][k] = s[i];
				k++;
				i++;
			}
			string_array[j][k] = '\0';
			j++;
		}
		i++;
	}
	return (string_array);
}
