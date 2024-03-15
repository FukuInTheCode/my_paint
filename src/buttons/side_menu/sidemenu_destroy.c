/*
** EPITECH PROJECT, 2024
** sidemenu_destroy.c
** File description:
** sidemenu_destroy.c
*/

#include "my.h"

static void side_all(sidemenu_t *s)
{
    zone_destroy(s->side);
    zone_destroy(s->plus);
    zone_destroy(s->moins);
}

int sidemenu_destroy(sidemenu_t *sidemenu)
{
    sfRectangleShape_destroy(sidemenu->rect);
    side_all(sidemenu);
    free(sidemenu);
    return 0;
}
