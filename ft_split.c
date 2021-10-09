/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaroli2 <acaroli2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 21:39:28 by acaroli2          #+#    #+#             */
/*   Updated: 2021/10/07 21:47:50 by acaroli2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countwords(char const *s, char c)
{
	int	i;
	int	cwords;

	i = 0;
	cwords = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i - 1] != c)
			cwords++;
		i++;
	}
	if (s[0] == c)
		cwords--;
	if (s[i - 1] == c)
		cwords--;
	if (cwords == i || s[0] == '\0')
		cwords = -1;
	return ((size_t)(cwords + 1));
}

size_t	ft_offset(char const *s, char c, size_t i)
{
	while (s[i] == c)
		i++;
	return (i);
}

size_t	ft_lenword(char const *s, char c, size_t i)
{
	size_t	len;

	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	size_t	cwords;
	size_t	lenword;
	size_t	offset;
	char	**tab;

	if (s == NULL)
		return (NULL);
	cwords = ft_countwords(s, c);
	tab = (char **)malloc(sizeof(char *) * (cwords + 1));
	if (tab == NULL)
		return (NULL);
	i = -1;
	offset = 0;
	lenword = 0;
	while ((size_t)++i < cwords)
	{
		offset = ft_offset(s, c, offset + lenword);
		lenword = ft_lenword(s, c, offset);
		tab[i] = (char *)ft_calloc(sizeof(char), (lenword + 1));
		if (tab[i] != NULL)
			ft_strlcpy(tab[i], &s[offset], lenword + 1);
	}
	tab[i] = NULL;
	return (tab);
}
