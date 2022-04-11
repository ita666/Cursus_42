/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanthoma <yanthoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 01:25:33 by yanthoma          #+#    #+#             */
/*   Updated: 2022/04/04 01:25:33 by yanthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s, size_t start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dest;

	j = start;
	i = len - start;
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	while (j < len && (*(s + j) != '\0'))
	{
		*dest = *(s + j);
		dest++;
		j++;
	}
	*dest = '\0';
	return (dest - i);
}
/*
#include <stdio.h>
int main()
{
    char *src = "flemme de tester tout ca";
    int m = 3;
    int n = 6;
    char* a = ft_substr(src, m, n);
    printf("%s\n", a);
}*/