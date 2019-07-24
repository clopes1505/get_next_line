/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:07:08 by clopes            #+#    #+#             */
/*   Updated: 2019/07/05 10:55:20 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t k;

	k = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst <= src)
	{
		k = 0;
		while (k < len)
		{
			((unsigned char *)dst)[k] = ((unsigned char *)src)[k];
			k++;
		}
	}
	else
	{
		k = len;
		while (k > 0)
		{
			((unsigned char *)dst)[k - 1] = ((unsigned char *)src)[k - 1];
			k--;
		}
	}
	return (dst);
}
