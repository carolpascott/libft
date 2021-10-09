/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaroli2 <acaroli2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 21:09:46 by acaroli2          #+#    #+#             */
/*   Updated: 2021/10/03 19:12:59 by acaroli2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_startchr(char *s, char const *chr, size_t start)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (chr[i] != '\0')
	{
		if (s[start] == chr[i])
		{
			start++;
			count++;
			i = 0;
		}
		else
			i++;
	}
	return (count);
}

size_t	ft_endchr(char *s, char const *chr, size_t start)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (chr[i] != '\0')
	{
		if (s[start] == chr[i])
		{
			start--;
			count++;
			i = 0;
		}
		else
			i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		start;
	size_t		end;
	char		*dest;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	dest = (char *)s1;
	i = ft_strlen(dest);
	start = ft_startchr(dest, set, 0);
	end = i - ft_endchr(dest, set, i - 1);
	dest = ft_substr((char *)dest, start, end - start);
	if (dest == NULL)
		return (NULL);
	return (dest);
}
