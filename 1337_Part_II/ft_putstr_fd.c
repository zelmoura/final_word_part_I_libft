#include"libft.h"

void ft_putstr_fd(char *s, int fd)
{
    if(!s)
    return ;
    while (*s)
    {
        ft_putchar_fd(*s, fd);
        s++;
    }
}
// int main()
// {
//    char *s = "Ssalaa\nm";
//    ft_putstr_fd(s, 1);
//     return(0);
// }