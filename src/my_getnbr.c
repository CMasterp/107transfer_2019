/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** Returns a number, sent to the function as a string
*/

#include <stddef.h>

int my_getnbr(char const *str)
{
    int i = 0;
    int neg = 1;
    int n = 0;

    if (str == NULL)
        return (0);
    for (; str[i] != '\0'  && str[i] != '\n'
&& (str[i] == '+' || str[i] == '-'); i++)
        if (str[i] == '-')
            neg = neg * -1;
    n = 0;
    for (; str[i] != '\0' && str[i] >= 48 && str[i] <= 57; i++)
        n = (n * 10) + str[i] - 48;
    return (n * neg);
}
