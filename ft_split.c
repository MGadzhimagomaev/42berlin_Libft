#include "libft.h"

char    **ft_split(char const *s, char c)
{
    char    **arr;
    int    i;
    int    j;
    int    len;

    len = ft_strlen(s) / sizeof(char);
    arr = (char **)malloc(sizeof(char) * (len + 1));
    i = 0;
    while (i < len)
    {
        if (s[i] == c)
        {

        }
    }
}