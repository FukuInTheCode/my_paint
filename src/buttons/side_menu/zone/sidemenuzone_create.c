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
    zone->priority = 3;
    zone->draw_f = sidemenuzone_draw;
    zone->press_f = sidemenuzone_press;
    sidemenu->side = sidezone_create(zone);
    sidemenu->plus = plus_create(sidemenu->side);
    sidemenu->moins = minus_create(sidemenu->side);
    zone->free_f = sidemenu_destroy;
    zone->size.x = 50;
    zone->size.y = 100;
    zone->adjust = (sfVector2f){-10, 400};
    return zone;
}
