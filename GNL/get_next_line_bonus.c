/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanthoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:28:34 by yanthoma          #+#    #+#             */
/*   Updated: 2022/05/30 13:28:42 by yanthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char		*stash[1024];
	char			*buffer;
	ssize_t			readed;
	char			*line_to_return;

	readed = 1;
	if (BUFFER_SIZE <= 0 || (fd < 0 && fd > 1024))
		return (NULL);
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	while (readed && !ft_new_line(stash[fd]))
	{
		readed = read(fd, buffer, BUFFER_SIZE);
		if (readed == -1)
			return (ft_free(buffer));
		buffer[readed] = '\0';
		stash[fd] = ft_strjoin(stash[fd], buffer);
		if (!stash[fd])
			return (NULL);
	}
	line_to_return = get_line_from_stash (stash[fd]);
	stash[fd] = clear_line_from_stash (stash[fd]);
	free(buffer);
	return (line_to_return);
}

char	*get_line_from_stash(char *stash)
{
	size_t	i;
	size_t	j;
	char	*temp;

	i = 0;
	j = 0;
	if (!stash || !stash[i])
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	temp = malloc(sizeof(char) * (i + 2));
	if (!temp)
		return (NULL);
	while (j <= i)
	{
		temp[j] = stash[j];
		j++;
	}
	temp[j] = '\0';
	return (temp);
}

char	*clear_line_from_stash(char *stash)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*temp;

	i = 0;
	k = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
		return (ft_free(stash));
	temp = malloc(sizeof(char) * ft_strlen(stash) - i);
	if (!temp)
		return (ft_free(stash));
	j = i + 1;
	while (stash[j])
		temp[k++] = stash[j++];
	temp[k] = '\0';
	ft_free(stash);
	return (temp);
}

/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*str1;
	char	*str2;
	int		fd1;
	int		fd2;

	if (argc < 2)
		return (1);
	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_RDONLY);
	str1 = get_next_line(fd1);
	printf(" fd1 : %s", str1);
	free(str1);
	str2 = get_next_line(fd2);
	printf(" fd2 : %s", str2);
	free(str2);
	str1 = get_next_line(fd1);
	printf(" fd1 : %s", str1);
	free(str1);
	str2 = get_next_line(fd2);
	printf(" fd2 : %s", str2);
	free(str2);
	return (0);
}

*/