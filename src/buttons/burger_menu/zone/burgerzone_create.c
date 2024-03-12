/*
** EPITECH PROJECT, 2024
** burgerzone_create.c
** File description:
** burgerzone_create.c
*/

#include "my.h"

zone_t *burgerzone_create(void)
{
    zone_t *zone = zone_create();
    burger_t *burger = burger_create();

    zone->extra_information = (void *)burger;
    zone->name = my_strdup("burger");
    zone->depend_corner = UPPER_LEFT;
    zone->depend_on = NULL;
    zone->priority = 1;
    zone->draw_f = burgerzone_draw;
    zone->press_f = burgerzone_press;
    burger->file = file_create(zone);
    burger->edit = edit_create(burger->file);
    burger->help = help_create(burger->edit);
    zone->size.x = 100;
    zone->size.y = 100;
    return zone;
}
