#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n--)
	{
		if (s && (*(unsigned char *)s == (unsigned char) c))
			return ((void *)s);
		s++;
	}
	return (0);
}