/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:17:46 by clopes            #+#    #+#             */
/*   Updated: 2019/06/06 11:06:52 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	int		k;
	size_t	i;

	i = 0;
	k = 0;
	k = ft_strlen(dst);
	while (src[i] && i < n)
	{
		dst[k] = src[i];
		i++;
		k++;
	}
	dst[k] = '\0';
	return (dst);
}
