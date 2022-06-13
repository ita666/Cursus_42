/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanthoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:00:48 by yanthoma          #+#    #+#             */
/*   Updated: 2022/05/30 14:00:55 by yanthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stddef.h>	

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

int		ft_new_line(char *str);
size_t	ft_strlen(const char *s);
char	*ft_free(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*get_line_from_stash(char *stash);
char	*get_next_line(int fd);
char	*clear_line_from_stash(char *stash);

#endif
