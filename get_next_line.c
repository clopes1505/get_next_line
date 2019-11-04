/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 09:16:46 by clopes            #+#    #+#             */
/*   Updated: 2019/11/04 11:34:35 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./get_next_line.h"

static char		*add_to_array(char *lines, char *buf)
{
	char *new;

	new = ft_strjoin(lines, buf);
	ft_strdel(&lines);
	return (new);
}

static char		*get_line(char **line, char *lines)
{
	char	*temp;
	int		i;

	i = 0;
	while (lines[i] != '\n' && lines[i] != '\0')
		i++;
	*line = ft_strsub(lines, 0, i);
	if (ft_strcmp(*line, lines) == 0)
		return (NULL);
	else
	{
		temp = ft_strsub(lines, i + 1, (ft_strlen(lines + i) + 1));
		ft_strdel(&lines);
	}
	return (temp);
}

int				get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	static char	*lines[MAX_FD];
	int			ret;

	ret = 0;
	if (fd < 0 || fd > MAX_FD || line == NULL || read(fd, buf, 0) < 0)
		return (-1);
	if (!lines[fd])
		lines[fd] = ft_strnew(0);
	if (!(ft_strchr(lines[fd], '\n')))
	{
		while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
		{
			buf[ret] = '\0';
			lines[fd] = add_to_array(lines[fd], buf);
			if (ft_strchr(lines[fd], '\n'))
				break ;
		}
	}
	if (ret == 0 && !ft_strlen(lines[fd]))
		return (0);
	lines[fd] = get_line(line, lines[fd]);
	return (1);
}
