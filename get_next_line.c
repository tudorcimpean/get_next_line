/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 20:00:22 by tcimpean          #+#    #+#             */
/*   Updated: 2015/12/05 21:25:20 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int const fd, char **line)
{
	int		l;
	char	*s;

	l = 0;
	s = malloc(BUFFER_SIZE + 1);
	if (str == 0)
		return (0);


}

int main(void)
{
	int fd;
	char **str;

	fd = open("text.c", O_RDONLY);
	printf("%d", get_next_line(fd, str));
	return (0);
}
