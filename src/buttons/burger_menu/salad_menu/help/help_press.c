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
    static bool help_is_pressed = false;
    burger_t *burger = zone_get(window->head, "burger")->extra_information;

    zone_remove(&window->head, "pencil");
    zone_remove(&window->head, "eraser");
    zone_remove(&window->head, "open");
    zone_remove(&window->head, "save");
    zone_remove(&window->head, "quit");
    if (!help_is_pressed) {
        zone_add(&window->head, burger->subhelp);
        zone_add(&window->head, burger->about);
        help_is_pressed = true;
    } else {
        zone_remove(&window->head, "subhelp");
        zone_remove(&window->head, "about");
        help_is_pressed = false;
    }
    return 0;
}
