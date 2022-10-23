#include<stdlib.h>
void	*ft_memset(void *s, int c, size_t n)
{
	while (n--)
		*(char *)(s + n) = (char)c;
	return (s);
}
