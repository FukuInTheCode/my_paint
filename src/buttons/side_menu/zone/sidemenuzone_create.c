/*
** EPITECH PROJECT, 2024
** sidemenuzone_create.c
** File description:
** sidemenuzone_create.c
*/

#include "my.h"

zone_t *sidemenuzone_create(window_t *window)
{
    zone_t *zone = zone_create();
    sidemenu_t *sidemenu = sidemenu_create();

    zone->extra_information = (void *)sidemenu;
    zone->name = my_strdup("button_sidemenu");
    zone->depend_corner = LOWER_LEFT;
    zone->depend_on = zone_get(window->head, "burger");
    zone->priority = 2;
    zone->draw_f = sidemenuzone_draw;
    zone->size.x = 100;
    zone->size.y = 40;
    return zone;
}
