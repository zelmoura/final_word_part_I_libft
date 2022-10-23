#include<stdlib.h>
size_t	ft_strlen(const char *s)
{
	int	l;

	l = 0;
	while (*s)
	{
		l++;
		s++;
	}
	return (l);
}
