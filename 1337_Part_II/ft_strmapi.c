#include"libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int count;
    int i;
    char *resultat;
    if(!s || !f)
    return(NULL);

    count = ft_strlen(s);
    i = 0;
    resultat = malloc(count + 1);
    if(!resultat)
    return(NULL);
    while (i < count)
    {
        resultat[i] = f(i, s[i]);
        i++;
    }
    resultat[i] = '\0';
    return(resultat);
}
// char quadruple(unsigned int a, char c)
// {
//     (void) a;
//     return c + 1;
// }

// #include<stdio.h>
// int main()
// {
//     printf("%s\n",ft_strmapi("abcdef",&quadruple));
// }