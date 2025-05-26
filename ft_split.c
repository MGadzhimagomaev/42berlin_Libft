/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 19:57:35 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/05/25 17:46:24 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static void *free_str(char **str, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return(NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	start;
	size_t	element;

	arr = (char **)ft_calloc((word_count(s, c) + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	element = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			arr[element] = ft_substr(s, start, i - start);
			if (!arr[element])
				return (free_str(arr, element));
			element++;
		}
	}
	arr[element] = NULL;
	return (arr);
}
