/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 19:58:39 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/05/23 20:44:10 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*output;

	output = (char *)ft_calloc(len + 1, sizeof(char));
	if (!output)
		return (NULL);
	while (len--)
	{
		((char *)output)[len] = ((char *)s)[start + len];
	}
	return (output);
}
