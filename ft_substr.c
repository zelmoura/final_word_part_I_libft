#include"libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *d;
    int i;

    i =0;
    d = malloc(len + 1);
    if (d == NULL)
    return(NULL);
    while (i < len)
    {
        d[i] = s[start + i];
        i++;
    }
    d[i] = '\0';
    return(d);
}