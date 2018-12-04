/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 16:25:44 by malu              #+#    #+#             */
/*   Updated: 2018/11/24 17:11:26 by malu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
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
		ft_putnbr_fd(temp / 10, fd);
		ft_putchar_fd(temp % 10 + 48, fd);
	}
	else
		ft_putchar_fd(temp % 10 + 48, fd);
}
