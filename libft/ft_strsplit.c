/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:29:00 by clopes            #+#    #+#             */
/*   Updated: 2019/07/09 14:41:30 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		x;
	int		k;
	int		i;

	k = 0;
	x = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(arr = malloc(sizeof(char *) * ft_wordcount(s, c) + 1)))
		return (NULL);
	while (x < ft_wordcount(s, c))
	{
		while (s[k] == c && s[k] != '\0')
			k++;
		i = ft_wordlen(s + k, c);
		arr[x] = ft_strsub(s, k, i);
		k += i;
		x++;
	}
	arr[x] = NULL;
	return (arr);
}
