/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanthoma <yanthoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:53:28 by yanthoma          #+#    #+#             */
/*   Updated: 2022/03/31 12:53:28 by yanthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		ls1;
	size_t		ls2;
	char		*dest;

	i = -1;
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	dest = malloc(sizeof(char) *(ls1 + ls2 + 1));
	if (!dest)
		return (NULL);
	while (s1[++i])
		dest[i] = s1[i];
	i = -1;
	while (s2[++i])
		dest[ls1 + i] = s2[i];
	dest[ls1 + ls2 + 1] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main (void)
{
	char *c1 = "prouuuuut";
	char *c2 = "chuck";

	printf("%s\n", ft_strjoin(c1, c2));
}*/