/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaroli2 <acaroli2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 23:25:48 by acaroli2          #+#    #+#             */
/*   Updated: 2021/10/02 20:41:43 by acaroli2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(long int n, int size)
{
	if (n < 0)
	{
		size++;
		n *= -1;
		return (ft_size(n, size));
	}
	else if (n >= 10)
	{
		size++;
		return (ft_size(n / 10, size));
	}
	else
	{
		size++;
		return (size);
	}
}

char	*ft_mod(char *dest, long int n, int i)
{
	if (n < 0)
	{
		dest[0] = '-';
		if (n == -2147483648)
		{
			dest[--i] = '8';
			n /= 10;
		}
		n *= -1;
	}
	if (n >= 10)
	{
		dest[--i] = (n % 10) + '0';
		ft_mod(dest, n / 10, i);
	}
	else
		dest[--i] = (n % 10) + '0';
	return (dest);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		size;

	size = ft_size(n, 0);
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
		return (NULL);
	ft_mod(dest, n, size);
	dest[size] = '\0';
	return (dest);
}
