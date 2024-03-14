/*
** EPITECH PROJECT, 2024
** file_press.c
** File description:
** file_press.c
*/

#include "my.h"
#include <stdbool.h>

int edit_press(zone_t *zone, window_t *window)
{
    burger_t *burger = zone_get(window->head, "burger")->extra_information;

    zone_remove(&window->head, "subhelp");
    zone_remove(&window->head, "about");
    zone_remove(&window->head, "open");
    zone_remove(&window->head, "save");
    zone_remove(&window->head, "quit");
    if (!burger->is_edit) {
        zone_add(&window->head, burger->pencil);
        zone_add(&window->head, burger->eraser);
        burger->is_edit = true;
        burger->is_help = false;
        burger->is_file = false;
    } else {
        zone_remove(&window->head, "pencil");
        zone_remove(&window->head, "eraser");
        burger->is_edit = false;
    }
    return 0;
}
