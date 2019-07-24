/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:52:23 by clopes            #+#    #+#             */
/*   Updated: 2019/07/01 16:07:10 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		k;
	char	*str;
	int		len;

	k = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	if (!(str = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (s[k])
	{
		str[k] = f(s[k]);
		k++;
	}
	str[k] = '\0';
	return (str);
}
