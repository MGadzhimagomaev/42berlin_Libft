/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 18:04:38 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/05/25 20:05:17 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurence;

	last_occurence = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_occurence = (char *)s;
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
	}
	return (last_occurence);
}
/*
#include <stdio.h>

int	main()
{
	char	s[] = "Findif";
	char	c = 'z';

	printf("Check: %s\n", ft_strrchr(s, c));
}
//*/