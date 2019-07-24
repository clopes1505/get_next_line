/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 09:21:06 by clopes            #+#    #+#             */
/*   Updated: 2019/07/05 22:13:19 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BUFF_SIZE 100
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int		get_next_line(const int fd, char **line);

#endif
