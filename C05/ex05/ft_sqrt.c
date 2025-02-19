#include <stdio.h>

int ft_sqrt(int nb)
{
    int i;

    if (nb < 0)
        return 0;

    i = 0;
    while (i * i <= nb && i <= 46340) // 46340² est le plus grand carré parfait < INT_MAX
    {
        if (i * i == nb)
            return i;
        i++;
    }
    return 0;
}

// 🔹 Fonction main pour tester la fonction
int main(void)
{
    printf("sqrt(0) = %d\n", ft_sqrt(0));  // 0
    printf("sqrt(1) = %d\n", ft_sqrt(1));  // 1
    printf("sqrt(4) = %d\n", ft_sqrt(4));  // 2
    printf("sqrt(9) = %d\n", ft_sqrt(9));  // 3
    printf("sqrt(16) = %d\n", ft_sqrt(16)); // 4
    printf("sqrt(25) = %d\n", ft_sqrt(25)); // 5
    printf("sqrt(10) = %d\n", ft_sqrt(10)); // 0 (pas un carré parfait)
    printf("sqrt(2147395600) = %d\n", ft_sqrt(2147395600)); // 46340
    printf("sqrt(-4) = %d\n", ft_sqrt(-4)); // 0
    return 0;
}

