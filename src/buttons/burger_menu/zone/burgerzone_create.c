/*
** EPITECH PROJECT, 2024
** burgerzone_create.c
** File description:
** burgerzone_create.c
*/

#include "my.h"

static int create_other(burger_t *burger)
{
    burger->open = open_create(burger->file);
    burger->save = save_create(burger->open);
    burger->quit = quit_create(burger->save);
    burger->pencil = pencil_create_salad(burger->edit);
    burger->eraser = eraser_create_salad(burger->pencil);
    burger->subhelp = subhelp_create(burger->help);
    burger->about = about_create(burger->subhelp);
    return 0;
}

zone_t *burgerzone_create(void)
{
    zone_t *zone = zone_create();
    burger_t *burger = burger_create();

    zone->extra_information = (void *)burger;
    zone->name = my_strdup("burger");
    zone->depend_corner = UPPER_LEFT;
    zone->depend_on = NULL;
    zone->priority = 2;
    zone->draw_f = burgerzone_draw;
    zone->press_f = burgerzone_press;
    zone->hover_f = burgerzone_hover;
    zone->free_f = burger_destroy;
    burger->file = file_create(zone);
    burger->edit = edit_create(burger->file);
    burger->help = help_create(burger->edit);
    create_other(burger);
    zone->size.x = 100;
    zone->size.y = 100;
    return zone;
}
