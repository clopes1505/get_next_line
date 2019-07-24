/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 15:41:08 by clopes            #+#    #+#             */
/*   Updated: 2019/07/02 07:36:46 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char	*num;
	size_t	len;
	long	nb;

	nb = n;
	len = ft_numlen(nb);
	if (!(num = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	num[len--] = '\0';
	if (nb == 0)
	{
		num[0] = 48;
		return (num);
	}
	if (nb < 0)
	{
		num[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		num[len--] = (nb % 10) + 48;
		nb /= 10;
	}
	return (num);
}
