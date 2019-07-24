/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 13:42:24 by clopes            #+#    #+#             */
/*   Updated: 2019/06/24 12:05:33 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				k;
	const char		*pos;

	k = ft_strlen(s);
	pos = NULL;
	while (k >= 0)
	{
		if ((unsigned char)s[k] == c)
		{
			pos = &s[k];
			break ;
		}
		else
			k--;
	}
	return ((char *)pos);
}
