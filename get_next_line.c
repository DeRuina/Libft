/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:42:40 by druina            #+#    #+#             */
/*   Updated: 2022/11/23 11:38:40 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*freelasttime(char *keep, char *line)
{
	free(keep);
	free(line);
	return (NULL);
}

static	char	*keepbuf(char *keep)
{
	int		i;
	int		j;
	char	*leftover;

	i = 0;
	j = 0;
	while (keep[i] != '\0' && keep[i] != '\n')
		i++;
	leftover = (char *)malloc(sizeof(char) * (ft_strlen(keep) - i + 1));
	if (!leftover)
		return (NULL);
	while (keep[i] != '\0')
		leftover[j++] = keep[++i];
	leftover[j] = '\0';
	free(keep);
	return (leftover);
}

static char	*getln(char *buf)
{
	int		i;
	char	*line;
	int		len;

	i = 0;
	while (buf[i] != '\0' && buf[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	len = i + 1;
	i = 0;
	while (i < len)
	{
		line[i] = buf[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

static char	*keepandfree(char *keep, char *buf)
{
	char	*answer;

	answer = ft_strjoin(keep, buf);
	if (keep)
		free(keep);
	return (answer);
}

char	*get_next_line(int fd)
{
	char		buf[BUFFER_SIZE + 1];
	int			ret;
	static char	*keep;
	char		*line;

	ret = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (ret > 0)
	{
		ret = read(fd, buf, BUFFER_SIZE);
		if (ret == -1 || (ret == 0 && keep == NULL))
			return (NULL);
		buf[ret] = '\0';
		keep = keepandfree(keep, buf);
		if (ft_strchr(keep, '\n'))
			break ;
	}
	line = getln(keep);
	keep = keepbuf(keep);
	if (ret == 0 && !*line)
		return (freelasttime(keep, line));
	return (line);
}
