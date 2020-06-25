/*
** EPITECH PROJECT, 2020
** error
** File description:
** error
*/

#include "../include/my.h"

int error_case(char *ave)
{
    int i = 1, j = 0, g = 0, k = 0, s = 0, q = 0;
    if (ave == NULL)
        return (84);
    for (; (((ave[j] >= '0' && ave[j] <= '9') || ave[j] == '.' || ave[j] == '-' || ave[j] == '+') && ave[j] != '\0'); j++, g++) {
        k += (ave[j] == '.') ? 1 : 0;
        s += (ave[j] == '-') ? 1 : 0;
        q += (ave[j] == '+') ? 1 : 0;
        g++;
    }
    if ((g != strlen(ave)) || (s == 1 && q == 1) || (k > 1 || s > 1 || q > 1))
        return (84);
    return (0);
}

int see_error(char *str, char ***eme, char *stt)
{
    static int o = 0;
    int i = 0, g = 0;

    for (int p = 0; str[i] != '\0'; i++, g++) {
        if (str[i] == '*') {
            eme[o][p][g] = '\0';
            p++;
            eme[o][p][0] = '\0';
            g = -1;
        } else {
            eme[o][p][g] = str[i];
            eme[o][p][g + 1] = '\0';
        }
        if (str[i + 1] == '\0')
            eme[o][p + 1] = NULL;
    }
    for (int u = 0; eme[o][u] != NULL; u++)
        if (error_case(eme[o][u]) == 84)
            return (84);
    o++;
    if (stt == NULL)
        eme[o] = NULL;
    return (0);
}

int manage_error(char *str, char ***eme, char *stt)
{
    if (see_error(str, eme, stt) == 84)
        return (84);
    return (0);
}

int error(char **av, char ***eme)
{
    int i = 1;
    static int g = 0;

    for (; av[i] != NULL; i++) {
	if (manage_error(av[i], eme, av[i + 1]) == 84)
            return (84);
        if (((i % 2) == 0) && my_is_zero(eme, g) == 0)
            return (84);
        g++;
    }
    return (0);
}
