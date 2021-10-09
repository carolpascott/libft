/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaroli2 <acaroli2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:46:55 by acaroli2          #+#    #+#             */
/*   Updated: 2021/10/03 15:09:41 by acaroli2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str;
	char	*cstr;
	size_t	i;

	str = (char *)dest;
	cstr = (char *)src;
	i = 0;
	if (str == NULL && cstr == NULL)
		return (NULL);
	while (i < n)
	{
		str[i] = cstr[i];
		i++;
	}
	return (dest);
}
