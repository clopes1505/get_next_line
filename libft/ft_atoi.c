/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 07:14:42 by clopes            #+#    #+#             */
/*   Updated: 2019/06/06 10:51:48 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(const char *str)
{
	int res;
	int sign;
	int k;

	sign = 1;
	k = 0;
	res = 0;
	while (str[k] == ' ' || str[k] == '\n' || str[k] == '\t'
			|| str[k] == '\v' || str[k] == '\r' || str[k] == '\f')
		k++;
	if (str[k] == '-')
		sign = -1;
	if (str[k] == '-' || str[k] == '+')
		k++;
	while (str[k] >= '0' && str[k] <= '9')
	{
		res = (res * 10) + (str[k] - '0');
		k++;
	}
	return (res * sign);
}
