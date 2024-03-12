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
    zone->draw_f = burgerzone_draw;
    return zone;
}
