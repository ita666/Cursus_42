/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanthoma <yanthoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:30:04 by yanthoma          #+#    #+#             */
/*   Updated: 2022/04/11 22:30:04 by yanthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;

	temp = NULL;
	while (*s)
	{
		if (*s == c)
			temp = s;
		s++;
	}
	return (temp);
}
/*
#include <stdio.h>
#include <string.h>
int main (void)
{
    char *c = "je ne veux pvas";
    char *c1 = "je ne veux pvas";
    char d = 'v';

    printf("%s\n",ft_strrchr(c, d));
    printf("%s\n", strrchr(c1, d));
    printf("%p\n", NULL);
}*/