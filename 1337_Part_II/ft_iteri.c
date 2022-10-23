#include"libft.h"
#include<stdio.h>
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int count;
    int i;
    if(!s || !f)
    return ;

    count = ft_strlen(s);
    i = 0;
    while (i < count)
    {
        f(i, &s[i]);
        i++;
    }
}
// void ft_rr(unsigned int x, char *c)
// {
//     (void) c;
//   printf("%d\n", x);
// }


// int main()
// {
//     char *s = "abc";

//     ft_striteri(s, ft_rr);
//     printf("%s", s);
//     return 0;
// }
