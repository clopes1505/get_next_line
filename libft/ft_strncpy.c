/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:16:10 by clopes            #+#    #+#             */
/*   Updated: 2019/06/24 12:02:24 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t k;

	k = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (k < len && src[k])
	{
		dst[k] = src[k];
		k++;
	}
	while (k < len)
	{
		dst[k] = '\0';
		k++;
	}
	return (dst);
}
