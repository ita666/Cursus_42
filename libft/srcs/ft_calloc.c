/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanthoma <yanthoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:41:51 by yanthoma          #+#    #+#             */
/*   Updated: 2022/03/30 12:41:51 by yanthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	while (i < size)
	{
		*(unsigned char *)(ptr + i) = '\0';
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
int main (void)
{
 
 char *c  = "fififi";
 char *c1 = "fififi";
 
 c  = ft_calloc(4,2);
 c1 = calloc(4,2);

 printf("%s\n", c);
 printf("%s\n", c1);
}*/