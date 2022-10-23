#include"libft.h"
void ft_putnbr_fd(int n, int fd)
{
    unsigned int nbr;

    nbr = n;
    if(n < 0)
    {
        ft_putchar_fd('-', fd);
        nbr = nbr * -1;
    }
    if(nbr < 10)
    ft_putchar_fd(nbr + '0', fd);
    else
    {
        ft_putnbr_fd(nbr / 10, fd);
        ft_putnbr_fd(nbr % 10, fd);
    }
}

// int main()
// {
//     int n = -2147483648;
//     ft_putnbr_fd(n , 1);
//     return(0);
// }