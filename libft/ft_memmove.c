/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:00:36 by malu              #+#    #+#             */
/*   Updated: 2018/12/01 13:14:02 by malu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*add;

	add = dest;
	while (dest && n != 0)
	{
		*(char*)dest = *(char*)src;
		dest++;
		src++;
		n--;
	}
	if (n != 0)
		*(char*)dest = '\0';
	return (add);
}

int		main(void)
{


	char    dst1[0xF0];
    char    dst2[0xF0];
	char    *data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
	int             size = 0xF0 - 0xF;

	memset(dst1, 'A', sizeof(dst1));
	memset(dst2, 'A', sizeof(dst2));
	memcpy(dst1, data, strlen(data));
	memcpy(dst2, data, strlen(data));
	memmove(dst1 + 3, dst1, size);
	printf("dst1 : %s\n",dst1);
	printf("dst2 : %s\n",dst2);
	printf("my   : %s\n", ft_memmove(dst1 + 3, dst1, size));
	printf("real : %s\n", memmove(dst2 + 3, dst2, size));
	return (0);
}
