/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:10:01 by clopes            #+#    #+#             */
/*   Updated: 2019/06/24 12:05:02 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t k;

	k = 0;
	if (s1 != NULL && s2 != NULL && n != 0)
	{
		if (s1[k] != s2[k])
			return (0);
		while (s1[k] == s2[k] && k < n && s1[k])
			k++;
		if (k == n || (k == ft_strlen(s1) && k == ft_strlen(s2)))
			return (1);
		else
			return (0);
	}
	return (1);
}
