#include <stdio.h>
#include <string.h>

int	main (void)
{
	char	t[] = "Start stop";
	char	t2[] = "Start stop";
	
	printf("Initial value: %s\n", t);
	memcpy(t, t+2, 15);
	memmove(t2, t2+2, 15);
	printf("After memcpy: %s\n", t);
        printf("After memmove: %s\n", t2);
}	
