/*
** EPITECH PROJECT, 2024
** file_press.c
** File description:
** file_press.c
*/

#include "my.h"
#include <stdbool.h>

int file_press(zone_t *zone, window_t *window)
{
    burger_t *burger = zone_get(window->head, "burger")->extra_information;

    zone_remove(&window->head, "subhelp");
    zone_remove(&window->head, "about");
    zone_remove(&window->head, "pencil");
    zone_remove(&window->head, "eraser");
    zone_remove(&window->head, "quit");
    if (!burger->is_file) {
        zone_add(&window->head, burger->open);
        zone_add(&window->head, burger->save);
        burger->is_help = false;
        burger->is_edit = false;
        burger->is_file = true;
    } else {
        zone_remove(&window->head, "open");
        zone_remove(&window->head, "save");
        burger->is_file = false;
    }
    return 0;
}
