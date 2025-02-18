#include <unistd.h>
int	ft_strcmp(char *s1, char *s2)
{
	while(*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++ ;
	}
}
