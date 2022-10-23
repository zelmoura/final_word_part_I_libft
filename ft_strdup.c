#include"libft.h"

char *ft_strdup(const char *s1)
{
    int len;
    char *s2;

    len = ft_strlen(s1);
    s2 = malloc(len);
    if(s2 == NULL)
    return(NULL);
    while(len--)
    {
        s2[len] = s1[len];
    }
    return((char *)s2);
}