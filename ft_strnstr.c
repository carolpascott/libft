/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaroli2 <acaroli2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 22:07:32 by acaroli2          #+#    #+#             */
/*   Updated: 2021/09/25 00:26:07 by acaroli2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	i = 0;
	if (len_s2 == 0)
		return ((char *)s1);
	if (len_s2 > len_s1)
		return (NULL);
	while (len_s2 <= n - i && s1[i] != '\0')
	{
		if (!ft_strncmp(&s1[i], s2, len_s2))
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
