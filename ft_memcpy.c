#include"libft.h"
void * ft_memcpy( void * destination, const void * source, size_t size )
{
    size_t i;

    i = 0;
    if (!destination && !source)
    return (NULL);
    while (i < size)
    {
        (*(unsigned char *)(destination + i)) = (*(unsigned char *)(source + i));
        i++;
    }
    return(destination);  
}