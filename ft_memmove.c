/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaroli2 <acaroli2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 20:02:15 by acaroli2          #+#    #+#             */
/*   Updated: 2021/09/25 18:23:13 by acaroli2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d_str;
	unsigned char	*s_str;
	size_t			i;

	d_str = (unsigned char *)dest;
	s_str = (unsigned char *)src;
	i = 0;
	if (d_str == NULL && s_str == NULL)
		return (NULL);
	if (s_str < d_str)
	{
		while (i < n)
		{
			i++;
			d_str[n - i] = s_str[n - i];
		}
	}
	else
		ft_memcpy(d_str, s_str, n);
	return (dest);
}
