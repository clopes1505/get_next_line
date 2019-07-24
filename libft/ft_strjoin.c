/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 08:04:34 by clopes            #+#    #+#             */
/*   Updated: 2019/07/09 14:09:15 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sfinal;
	size_t	k;
	size_t	tot;
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	tot = ft_strlen(s1) + ft_strlen(s2);
	if (!(sfinal = (char *)malloc(sizeof(char) * tot + 1)))
		return (NULL);
	k = 0;
	i = 0;
	while (s1[k])
	{
		sfinal[k] = s1[k];
		k++;
	}
	while (s2[i])
	{
		sfinal[k + i] = s2[i];
		i++;
	}
	sfinal[k + i] = '\0';
	return (sfinal);
}
