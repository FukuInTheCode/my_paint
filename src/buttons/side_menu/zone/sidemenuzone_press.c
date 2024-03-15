/*
** EPITECH PROJECT, 2024
** sidemenuzone_press.c
** File description:
** sidemenuzone_press.c
*/

#include "my.h"

int sidemenuzone_press(zone_t *sidemenuzone, window_t *window)
{
    return sidemenu_press(sidemenuzone->extra_information, window);
}
