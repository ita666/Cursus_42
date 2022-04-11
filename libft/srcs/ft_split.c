/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanthoma <yanthoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 20:03:11 by yanthoma          #+#    #+#             */
/*   Updated: 2022/04/09 20:03:11 by yanthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sep(char a, char sep)
{
	if (sep == '\0')
		return (1);
	if (a == sep)
		return (1);
	return (0);
}

static int	ft_wcount(char const *str, char sep)
{
	int	i;
	int	compt;

	i = 0;
	compt = 2;
	while (str[i])
	{
		if (ft_sep(str[i], sep) == 0)
			compt++;
		i++;
	}
	return (compt);
}

static int	ft_wsize(char const *str, char sep, int *start)
{
	int		i;
	int		size;

	i = *start;
	size = 1;
	while (ft_sep(str[i], sep) != 0)
	{
			i++;
			size++;
	}
	return (size);
}

static char	*ft_strdp(char const *str, char c, int *start)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(sizeof(*dest) * ft_wsize(str, c, start));
	if (!dest)
		return (NULL);
	while (str[*start] && ft_sep(str[*start], c) == 0)
	{
		dest[i] = str[*start];
		i++;
		(*start)++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const*s, char c)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = malloc(sizeof(char *) * ft_wcount(s, c));
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (!ft_sep(s[i], c))
		{
			str[j] = ft_strdp(s, c, &i);
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
/*
#include <stdio.h>
int main(int ac, char **av)
{
	int i = 0;
	char **t = ft_split(av[1], av[2][0]);
    while(t[i])
    {
        printf("%s\n", t[i]);
        i++;
    }
}*/