#include"libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *s_1;
    unsigned char *s_2;
    int i;

    i = 0;
    s_1 = (void *)s1;
    s_2 = (void *)s2;
    while (i < n)
    {
        if(s_1[i] != s_2[i])
        return (s_1[i] - s_2[i]);
        i++;
    }
    return (0);
}