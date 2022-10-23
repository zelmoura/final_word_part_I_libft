#include"libft.h"

void * ft_memmove( void * destination, const void * source, size_t size )
{
    if (!destination && !source)
    return (NULL);  //exemple.....
    if (destination < source)
    ft_memcpy(destination, source, size);
    else 
    {
        while (size--)
        (*(unsigned char *)(destination + size)) = (*(unsigned char *)(source + size));
        
    }
    return(destination);
    
}