/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanthoma <yanthoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 00:54:36 by yanthoma          #+#    #+#             */
/*   Updated: 2022/04/04 00:54:36 by yanthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main (void)
{
    char *c = "je ne veux pas";
    char *c1 = "je ne veux pas";
    char d = 'v';

    printf("%s\n",ft_strchr(c, d));
    printf("%s\n", strchr(c1, d));
    printf("%p\n", NULL);

}*/