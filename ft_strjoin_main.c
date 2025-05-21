/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 20:34:02 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/05/21 20:37:12 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	char	*s1 = "Prefix +";
	char	*s2 = " Suffix";
	char	*out;

	out = (char	*)ft_strjoin(s1, s2);
	printf("Output: %s", out);
}