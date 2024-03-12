/*
** EPITECH PROJECT, 2024
** burgerzone_press.c
** File description:
** burgerzone_press.c
*/

#include "my.h"

int burgerzone_press(zone_t *burgerzone, window_t *window)
{
    return burger_press(burgerzone->extra_information, window);
}
