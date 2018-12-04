/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 16:19:15 by malu              #+#    #+#             */
/*   Updated: 2018/11/24 16:55:15 by malu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long int temp;

	temp = n;
	if (n < 0)
	{
		ft_putchar('-');
		temp *= -1;
	}
	if (temp > 9)
	{
		ft_putnbr(temp / 10);
		ft_putchar(temp % 10 + 48);
	}
	else
		ft_putchar(temp % 10 + 48);
}
