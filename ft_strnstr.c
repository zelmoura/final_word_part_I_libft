#include<stdlib.h>
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i;
    int j;

    i = 0;   
    while (*haystack && i < len)
    {
      j = 0;
       while (haystack[i + j] == needle[j])
           j++;
       if (needle[j] == '\0')
           return ((char *)&haystack[i]);
       i++;
    }
    return (0);
}