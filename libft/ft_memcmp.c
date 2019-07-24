/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:28:53 by clopes            #+#    #+#             */
/*   Updated: 2019/06/24 11:04:01 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			k;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	if (ss1 == NULL && ss2 == NULL)
		return (0);
	k = 0;
	while (k < n)
	{
		if (ss1[k] == ss2[k])
		{
			k++;
		}
		else
			return (ss1[k] - ss2[k]);
	}
	return (0);
}
