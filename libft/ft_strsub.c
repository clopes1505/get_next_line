/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:21:58 by clopes            #+#    #+#             */
/*   Updated: 2019/06/25 10:07:00 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	k;
	char	*s1;

	s1 = (char *)malloc(sizeof(char) * (len + 1));
	k = 0;
	if (s == NULL || start > ft_strlen(s) || s1 == NULL)
		return (0);
	while (k < len && s[start + k] && s[k] != '\0')
	{
		s1[k] = s[start + k];
		k++;
	}
	s1[k] = '\0';
	return (s1);
}
