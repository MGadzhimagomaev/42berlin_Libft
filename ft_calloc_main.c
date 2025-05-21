/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 22:27:57 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/05/19 22:28:00 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "libft.h"

int is_zeroed(const void *ptr, size_t size)
{
	const unsigned char *bytes = (const unsigned char *)ptr;
	for (size_t i = 0; i < size; i++)
	{
		if (bytes[i] != 0)
			return 0;
	}
	return 1;
}

void print_result(const char *desc, int ft_ok, int sys_ok)
{
	printf("%s → ft_calloc: %s, calloc: %s\n",
		desc,
		ft_ok ? "✅ OK" : "❌ FAIL",
		sys_ok ? "✅ OK" : "❌ FAIL");
}

void test_ft_calloc()
{
	void *ft_ptr, *sys_ptr;
	size_t total;

	// Test 1: Normal usage
	ft_ptr = ft_calloc(5, sizeof(int));
	sys_ptr = calloc(5, sizeof(int));
	total = 5 * sizeof(int);
	print_result("Test 1: calloc(5, sizeof(int))",
		ft_ptr && is_zeroed(ft_ptr, total),
		sys_ptr && is_zeroed(sys_ptr, total));
	free(ft_ptr);
	free(sys_ptr);

	// Test 2: Zero elements
	ft_ptr = ft_calloc(0, sizeof(int));
	sys_ptr = calloc(0, sizeof(int));
	print_result("Test 2: calloc(0, sizeof(int))",
		ft_ptr != NULL || ft_ptr == NULL, // malloc(0) is implementation-defined
		sys_ptr != NULL || sys_ptr == NULL);
	free(ft_ptr);
	free(sys_ptr);

	// Test 3: Zero size
	ft_ptr = ft_calloc(5, 0);
	sys_ptr = calloc(5, 0);
	print_result("Test 3: calloc(5, 0)",
		ft_ptr != NULL || ft_ptr == NULL,
		sys_ptr != NULL || sys_ptr == NULL);
	free(ft_ptr);
	free(sys_ptr);

	// Test 4: Large allocation (overflow attempt)
	size_t huge = SIZE_MAX;
	ft_ptr = ft_calloc(huge, 2); // Should return NULL safely
	sys_ptr = calloc(huge, 2);
	print_result("Test 4: calloc(SIZE_MAX, 2) — overflow",
		ft_ptr == NULL,
		sys_ptr == NULL);

	// Test 5: Small string allocation
	ft_ptr = ft_calloc(10, sizeof(char));
	sys_ptr = calloc(10, sizeof(char));
	print_result("Test 5: calloc(10, sizeof(char))",
		ft_ptr && is_zeroed(ft_ptr, 10),
		sys_ptr && is_zeroed(sys_ptr, 10));
	free(ft_ptr);
	free(sys_ptr);
}

int	main(void)
{
	test_ft_calloc();
	return (0);
}