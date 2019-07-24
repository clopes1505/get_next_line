/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:10:55 by clopes            #+#    #+#             */
/*   Updated: 2019/06/24 12:15:47 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t k;
	size_t i;

	k = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[k] && k < len)
	{
		i = 0;
		while (needle[i] == haystack[k + i])
		{
			if ((k + i) == len)
				break ;
			if (needle[i + 1] == '\0')
				return ((char*)haystack + k);
			i++;
		}
		k++;
	}
	return (NULL);
}
