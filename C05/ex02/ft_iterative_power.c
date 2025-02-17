int	ft_iterative_power(int nb, int power)
{	
	int	i;
	int	powered;
	i = power;
	powered = nb;
	if (nb == 0 && power == 0)
		return (1);
	while(i > 1)
	{
		powered *= nb;
		i--;
	}
	return (powered);
}
#include <stdio.h>
int main()
{
	printf("%d\n", ft_iterative_power(2, 10));
}
