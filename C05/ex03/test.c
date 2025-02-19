#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return 0;
    if (power == 0)
        return 1;
    return nb * ft_recursive_power(nb, power - 1);
}
int main(void)
{
    printf("2^4 = %d\n", ft_recursive_power(2, 4)); // 16
    printf("3^3 = %d\n", ft_recursive_power(3, 3)); // 27
    printf("5^0 = %d\n", ft_recursive_power(5, 0)); // 1
    printf("0^0 = %d\n", ft_recursive_power(0, 0)); // 1
    printf("2^-2 = %d\n", ft_recursive_power(2, -2)); // 0
    printf("%d\n", ft_recursive_power(-1, 2));
    return 0;
}

