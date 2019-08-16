/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <clopes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 09:16:46 by clopes            #+#    #+#             */
/*   Updated: 2019/08/16 06:58:53 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*add_lines(char *line, char *temp)
{
	char *str;

	str = ft_strjoin(line, temp);
	free(line);
	return (str);
}

static char		*get_line(char **line, char *str)
{
	char	*temp;
	int		k;

	k = 0;
	while (str[k] != '\n' && str[k] != '\0')
		k++;
	*line = ft_strsub(str, 0, k);
	if (ft_strcmp(*line, str) == 0)
		return (NULL);
	else
	{
		temp = ft_strsub(str, k + 1, (ft_strlen(str + k) + 1));
		free(str);
	}
	return (temp);
}

int				get_next_line(const int fd, char **line)
{
	char		temp[BUFF_SIZE + 1];
	static char	*str[1024];
	int			ret;

	if (fd < 0 || fd > 1024 || line == NULL || read(fd, temp, 0) < 0)
		return (-1);
	if (!str[fd])
		str[fd] = ft_strnew(0);
	if (!(ft_strchr(str[fd], '\n')))
	{
		while ((ret = read(fd, temp, BUFF_SIZE)) > 0)
		{
			temp[ret] = '\0';
			str[fd] = add_lines(str[fd], temp);
			if (ft_strchr(str[fd], '\n'))
				break ;
		}
	}
	if (ret == 0 && !ft_strlen(str[fd]))
		return (0);
	str[fd] = get_line(line, str[fd]);
	return (1);
}
int 	main(int argc, char **argv)
{
	int 	fd;
	char	*str;

	(void)argc;
	fd = open(argv[1], O_RDONLY);
	while ((get_next_line(fd, &str)) > 0)
	{
		if (str != NULL)
		{
		ft_putendl(str);
		free(str);
		}
	}
	sleep(60);
	return(0);
}
