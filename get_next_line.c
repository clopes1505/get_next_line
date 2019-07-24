/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <clopes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 09:16:46 by clopes            #+#    #+#             */
/*   Updated: 2019/07/15 08:35:28 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "libft/libft.h"

int		check_newline(char *str)
{
	int k;

	k = 0;
	while(str[k])
	{
		if(str[k] == '\n')
			return(1);
		k++;
	}
	return(0);
}

char    *copy_newline(char *str)
{
	int k;
	char *line;

	k = 0;
	while(str[k])
	{
		//ft_putendl("Of");
		if(str[k] == '\n')
			{
				line = ft_strsub(str, 0, k);
				break ;
			}
		k++;
	}
	line[k] = '\0';
	//ft_putendl("of");
	return(line);
}
int		get_next_line(const int fd, char **line)
{
	static char *str[1024];
	char 		readstr[BUFF_SIZE + 1];
	char		*temp;
	int 		k;

	//ft_putendl("1");
	if (fd < 0 || line == NULL || BUFF_SIZE <= 0)
		return(-1);
	if(!str[fd])
		str[fd] = ft_strnew(0);
	//ft_putendl("2");
	temp = ft_strdup(str[fd]);
	while((k = read(fd, readstr, BUFF_SIZE)) > 0)
		{
			readstr[k] = '\0';
			str[fd] = ft_strjoin(temp, readstr);
	//		ft_putendl(readstr);
			if(check_newline(str[fd]) == 1)
				//ft_putendl("Loops");
				break ;
		}
	//ft_putendl("Fruit");
	*line = str[fd];
	if (k < BUFF_SIZE || ft_strlen(str[fd]) == 0)
		return (0);
	//ft_putendl("Moment");
	//ft_putendl("Truth");
	free(temp);
		return(1);
}
int 	main(int argc, char **argv)
{
	int 	fd;
	char	*str;

	(void)argc;
	fd = open(argv[1], O_RDONLY);
	while ((get_next_line(fd, &str)) > 0)
	{
		ft_putendl(str);
		free(str);
	}
	return(0);
}