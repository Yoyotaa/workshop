/*
** EPITECH PROJECT, 2021
** main
** File description:
** workshop
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
}

int main()
{
    my_putstr("Hello, world !\n");
}
