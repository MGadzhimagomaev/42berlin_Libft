/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:20:58 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/05/15 21:30:08 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	// int	x = atoi(argv[1]);
	char 	*p = argv[1];

	if (argc > 0)
	{
		// printf("Original isdigit: %d\nMy isdigit: %d\n\n", isdigit(x), ft_isdigit(x));
		// printf("Original isalpha: %d\nMy isalpha: %d\n\n", isalpha(x), ft_isalpha(x));
		// printf("Original isalnum: %d\nMy isalnum: %d\n\n", isalnum(x), ft_isalnum(x));
		// printf("Original isascii: %d\nMy isascii: %d\n\n", isascii(x), ft_isascii(x));
		// printf("Original isprint: %d\nMy isprint: %d\n\n", isprint(x), ft_isprint(x));
		printf("Original isprint: %zu\nMy isprint: %zu\n\n", strlen(p), ft_strlen(p));
	}
}
