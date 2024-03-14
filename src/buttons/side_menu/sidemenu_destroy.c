/*
** EPITECH PROJECT, 2024
** sidemenu_destroy.c
** File description:
** sidemenu_destroy.c
*/

#include "my.h"

int sidemenu_destroy(sidemenu_t *sidemenu)
{
    sfRectangleShape_destroy(sidemenu->rect);
    free(sidemenu);
    return 0;
}
