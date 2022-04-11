/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat-bug.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanthoma <yanthoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:55:24 by yanthoma          #+#    #+#             */
/*   Updated: 2022/04/11 22:55:24 by yanthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*srcy;

	srcy = (char *) src;
	i = 0;
	j = 0;
	k = 0;
	while (dst[i])
		i++;
	while (srcy[j])
		j++;
	if (dstsize <= i || dstsize == 0)
		return (i + j);
	while (srcy[j] != '\0' && i + k + 1 < dstsize)
	{
		dst[i + k] = srcy[k];
		k++;
	}
	dst[i + k] = '\0';
	return (i + j);
}
/*
#include <stdio.h>
int main (void)
{
    char c[17] = "je n'ai pas envi";
    char c1[4] = "peux";
    int n = 0;

    n = ft_strlcat(c, c1, 25);
    printf ("%s\n", c);
    printf ("%d\n", n);
}*/