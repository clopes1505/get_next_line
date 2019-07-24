/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:51:09 by clopes            #+#    #+#             */
/*   Updated: 2019/06/24 11:53:20 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t k;

	k = 0;
	if (s1 != NULL && s2 != NULL)
	{
		if (s1[k] != s2[k])
			return (0);
		while (s1[k] == s2[k] && s1[k])
			k++;
		if (k == ft_strlen(s1) && k == ft_strlen(s2))
			return (1);
		else
			return (0);
	}
	return (0);
}
