/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanthoma <yanthoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:46:03 by yanthoma          #+#    #+#             */
/*   Updated: 2022/04/04 23:46:03 by yanthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checkchar(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*dest;
	size_t		i;
	size_t		j;
	size_t		k;

	i = 0;
	j = ft_strlen(s1) - 1;
	k = 0;
	while (s1[i] && ft_checkchar(set, s1[i]))
		i++;
	while (j > i && ft_checkchar(set, s1[j]))
		j--;
	dest = malloc(sizeof(char) * (j - i + 1));
	if (!dest)
		return (NULL);
	while (i < j)
	{
		dest[k] = s1[i];
		k++;
		i++;
	}
	dest[k] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main (void)
{
	char *a = "hjk je be veux pas travailler hjp";
	char *b = "khp";
	printf("%s\n",ft_strtrim(a,b));
}*/