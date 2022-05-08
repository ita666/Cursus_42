/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanthoma <yanthoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:41:51 by yanthoma          #+#    #+#             */
/*   Updated: 2022/05/06 11:56:53 by yanthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
/*
#include <stdio.h>

int main (void)
{
 
 //char *c  = "fififi";
 char *c1 = "fififi";
 
 //c  = ft_calloc(4, 1);
 c1 = calloc(4, 1);

 //printf("%s\n", c);
 printf("%s\n", c1);
}
*/