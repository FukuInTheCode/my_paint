/*
** EPITECH PROJECT, 2024
** file_press.c
** File description:
** file_press.c
*/

#include "my.h"
#include <stdbool.h>

int help_press(zone_t *zone, window_t *window)
{
    burger_t *burger = zone_get(window->head, "burger")->extra_information;

    zone_remove(&window->head, "pencil");
    zone_remove(&window->head, "eraser");
    zone_remove(&window->head, "open");
    zone_remove(&window->head, "save");
    if (!burger->is_help) {
        zone_add(&window->head, burger->subhelp);
        zone_add(&window->head, burger->about);
        zone_add(&window->head, burger->quit);
        burger->is_edit = false;
        burger->is_file = false;
        burger->is_help = true;
    } else {
        zone_remove(&window->head, "subhelp");
        zone_remove(&window->head, "about");
        zone_remove(&window->head, "quit");
        burger->is_help = false;
    }
    return 0;
}
