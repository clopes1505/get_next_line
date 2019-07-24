/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 11:58:52 by clopes            #+#    #+#             */
/*   Updated: 2019/06/24 11:01:16 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			k;
	char			*dst1;
	unsigned char	*src1;
	unsigned char	c1;

	c1 = c;
	dst1 = (char *)dst;
	src1 = (unsigned char *)src;
	if (dst1 == NULL && src1 == NULL)
		return (NULL);
	k = 0;
	while (k < n)
	{
		dst1[k] = src1[k];
		if (src1[k] == c1)
			return ((void *)&dst1[k + 1]);
		k++;
	}
	return (NULL);
}
