int	ft_iterative_factorial(int nb)
{
	int	i;
	i = nb;
	if (nb < 1)
		return (0);
	while (i > 1)
	{	
		nb *= i - 1;
		i--;
	}
	return (nb);
}
#include <stdio.h>
int main()
{
	printf("%d/n", ft_iterative_factorial(7));
}
