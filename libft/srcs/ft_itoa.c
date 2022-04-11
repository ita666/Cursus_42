/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanthoma <yanthoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 23:41:23 by yanthoma          #+#    #+#             */
/*   Updated: 2022/04/02 23:41:23 by yanthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
		len = 1;
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		i;

	i = ft_len(n);
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	if (n < 0)
	{	
		n *= -1;
		dest[0] = '-';
	}
	else if (n == 0)
	{
		dest[0] = '0';
		return (dest);
	}
	dest[i] = '\0';
	i--;
	while (n > 0)
	{
		dest[i--] = (n % 10) + 48;
		n /= 10;
	}
	return (dest);
}
/*
int main (void)
{
	printf("%s\n", ft_itoa(-1234));
}*/