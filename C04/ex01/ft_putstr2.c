#include <unistd.h>

void ft_putstr(const char *str) {
    int i = 0;
    while (str[i]) {
        i++;
    }
    write(1, str, i);
}

int main() {
    //const char *test = "Bonjour le monde!\n";
    ft_putstr("bonjour\n");
    return 0;
}
