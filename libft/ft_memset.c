/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 08:25:07 by clopes            #+#    #+#             */
/*   Updated: 2019/06/24 11:14:49 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *var, int x, size_t n)
{
	int				k;
	int				i;
	unsigned char	*y;

	k = 0;
	i = n;
	y = (unsigned char*)var;
	while (k < i)
	{
		y[k] = x;
		k++;
	}
	return (y);
}
