static int	word_count(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] != c && str[i])
				i++;
		}
	}
	return (count);
}
#include<stdio.h>
int main()
{
    printf("nmber word :%d", word_count("   Saalam    ifa    cv   ", ' '));
    return(0);
}