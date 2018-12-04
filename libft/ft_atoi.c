/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:38:05 by malu              #+#    #+#             */
/*   Updated: 2018/11/28 18:38:04 by malu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int			i;
	int			neg;
	long int	nb;

	neg = 1;
	i = 0;
	nb = 0;
	while ((str[i] >= 8 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-')
		neg *= -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (neg * nb);
}