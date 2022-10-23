#include"libft.h"
int ft_in_set(char const *set, char c)
{
    while(*set)
    {
        if(*set == c)
        return(1);
        set++;
    }
    return(0);
}
char *ft_debut(char const *s1, char const *set)
{
    while (*s1)
    {
        if(ft_in_set(set, *s1))
        s1++;
        else 
        break;
    }
    return((char *)s1);    
}
int ft_endIndex(char *s1, char const *set)
{
    int i;

    i = 0;
    int k;
    while (s1[i])
    i++;
    i = i - 1;
    while (i > 0)
    {
        if(ft_in_set(set, s1[i]))
        i--;
        else 
        break;
    }
    return(i);
}
char *ft_strtrim(char const *s1, char const *set)
{
    char *p;
    int i;

    if(!s1 || !set)
    return(NULL);
    s1 = ft_debut(s1, set);
    p = (char *)malloc(ft_endIndex((char *)s1,set) + 1);
    if(p == NULL)
    return(NULL);
      i = 0;
    while (i <= ft_endIndex((char *)s1,set))
    {
        p[i] = s1[i];
        i++;
    }
    p[i] = '\0';
   return(p);
}