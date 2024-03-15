/*
** EPITECH PROJECT, 2024
** sidemenu_draw.c
** File description:
** sidemenu_draw.c
*/

#include "my.h"

int sidemenuzone_draw(zone_t *sidemenu, window_t *window)
{
    return sidemenu_draw(sidemenu->extra_information, window);
}
