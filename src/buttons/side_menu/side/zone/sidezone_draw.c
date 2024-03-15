/*
** EPITECH PROJECT, 2024
** sidezone_destroy.c
** File description:
** sidezone_destroy.c
*/

#include "my.h"

int sidezone_draw(zone_t *sidezone, window_t *window)
{
    return side_draw(sidezone->extra_information, window);
}
