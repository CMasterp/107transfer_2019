/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "../include/my.h"

/* int transfer(char ***eme); */
/* int usage(void); */
/* int error(char **av, char ***eme); */

int main(int ac, char **av)
{
    char ***eme = malloc(sizeof(char **) * 500);

    for (int l = 0; l != 500; l++) {
        eme[l] = malloc(sizeof(char *) * 400);
        for (int m = 0; m != 300; m++) {
            eme[l][m] = malloc(sizeof(char) * 50);
            eme[l][m][0] = '\0';
        }
    }
    if (ac == 2 && strcmp(av[1], "-h") == 0)
        return (usage());
    else if (ac != 1 && (((ac - 1) % 2) == 0) && (error(av, eme) != 84)) {
        transfer(eme);
        return (0);
    }
    return (84);
}
