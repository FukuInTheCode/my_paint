/*
** EPITECH PROJECT, 2024
** canvazone_destroy.c
** File description:
** canvazone_destroy.c
*/

#include "my.h"

int burgerzone_draw(zone_t *burgerzone, window_t *window)
{
    return burger_draw(burgerzone->extra_information, window);
}
