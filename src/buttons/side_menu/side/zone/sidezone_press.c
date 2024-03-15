/*
** EPITECH PROJECT, 2024
** sidezone_press.c
** File description:
** sidezone_press.c
*/

#include "my.h"
int sidezone_press(zone_t *zone, window_t *window)
{
    zone_t *sidemenuzone = zone_get(window->head, "button_sidemenu");
    sidemenu_t *s = sidemenuzone->extra_information;

    s->is_clicked = false;
    zone_remove(&window->head, zone->name);
    zone_remove(&window->head, "plus");
    zone_remove(&window->head, "minus");
    return 0;
}
