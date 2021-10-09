/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaroli2 <acaroli2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 22:54:05 by acaroli2          #+#    #+#             */
/*   Updated: 2021/10/02 21:11:48 by acaroli2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	chr;

	i = ft_strlen(s);
	chr = (unsigned char)c;
	if (chr == '\0')
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if (s[i] == chr)
			return ((char *)&s[i]);
		else
			i--;
	}
	return (NULL);
}
