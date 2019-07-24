/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:45:44 by clopes            #+#    #+#             */
/*   Updated: 2019/06/24 11:55:08 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;
	size_t	tot;

	i = ft_strlen(dst);
	k = 0;
	tot = ft_strlen(src);
	if (i >= dstsize)
		return (tot + dstsize);
	while ((i + k) < (dstsize - 1) && src[k])
	{
		dst[i + k] = src[k];
		k++;
	}
	dst[i + k] = '\0';
	return (i + tot);
}
