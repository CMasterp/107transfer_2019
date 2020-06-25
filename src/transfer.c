/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "../include/my.h"

int value;

double calcul_with_string(char **str, double o)
{
    int a = 0;
    double b = 0;
    double res = 0;
    double pw = 0;

    value = 0;
    for (; str[a] != NULL && str[a][0] != '\0'; a++) {
        b = (double) (my_getnbr(str[a]));
        pw = pow(o, value);
        res += (b * pw);
        value++;
    }
    return (res);
}

double calcul_frac(char **num, char **den, double a)
{
    double res = 0;
    double r = 0;

    res = calcul_with_string(num, a);
    r = calcul_with_string(den, a);
    if (r == 0)
        exit (84);
    res /= r;
    return (res);
}

double calcul(char ***eme, double a)
{
    double res = 1;

    value = 0;
    for (int l = 0; eme[l] != NULL; l += 2)
        res *= calcul_frac(eme[l], eme[l + 1], a);
    return (res);
}

int transfer(char ***eme)
{
    double a = 0;

    for (; a < 1.001; a += 0.001) {
        printf("%.3f -> %.5f\n", a, calcul(eme, a));
    }
    return (0);
}

int my_is_zero(char ***str, int g)
{
    int a = 0;
    if ((g % 2) == 0)
        return (1);
    for (int u = 0; str[g][u] != NULL; u++)
        a += my_getnbr(str[g][u]);
    if (a == 0)
        return (0);
    return (1);
}
