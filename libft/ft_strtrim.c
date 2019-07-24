/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 08:44:58 by clopes            #+#    #+#             */
/*   Updated: 2019/06/10 07:31:27 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	k;
	size_t	i;
	char	*s1;

	k = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	while ((s[k]) && (s[k] == ' ' || s[k] == '\n' || s[k] == '\t'))
		k++;
	while (s[len] == '\0' || s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	len = (len - k) + 1;
	if (len <= 0)
		return (NULL);
	if (!(s1 = (char*)malloc(sizeof(char) * (len + 1))))
		return (ft_strnew(0));
	while (len-- > 0)
		s1[i++] = s[k++];
	s1[i] = '\0';
	return (s1);
}
