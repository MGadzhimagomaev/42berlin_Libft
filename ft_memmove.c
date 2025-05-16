/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 21:34:40 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/05/16 22:22:13 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	// const unsigned char* temp;

	// temp = src;
	// while (n-- > 0)
	// {
	// 	((unsigned char*)dest)[n] = temp[n];
	// }
	// return (dest);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char std_buf[30] = "Overlapping copy test!";
	char ft_buf[30] = "Overlapping copy test!";

	// Print before
	printf("Before:\n");
	printf("std_buf: %s\n", std_buf);
	printf("ft_buf : %s\n", ft_buf);

	// Overlapping copy: copy 10 bytes from index 0 to index 5
	memmove(std_buf + 5, std_buf, 10);
	ft_memmove(ft_buf + 5, ft_buf, 10);

	// Print after
	printf("\nAfter:\n");
	printf("std_buf: %s\n", std_buf);
	printf("ft_buf : %s\n", ft_buf);

	// Compare memory
	if (memcmp(std_buf, ft_buf, sizeof(std_buf)) == 0)
		printf("\n✅ Buffers match! ft_memmove works correctly.\n");
	else
		printf("\n❌ Buffers do not match. Bug detected in ft_memmove.\n");

	return 0;
}