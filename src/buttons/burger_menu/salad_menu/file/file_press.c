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
    static bool file_is_pressed = false;
    burger_t *burger = zone_get(window->head, "burger")->extra_information;

    zone_remove(&window->head, "subhelp");
    zone_remove(&window->head, "about");
    zone_remove(&window->head, "pencil");
    zone_remove(&window->head, "eraser");
    if (!file_is_pressed) {
        zone_add(&window->head, burger->open);
        zone_add(&window->head, burger->save);
        zone_add(&window->head, burger->quit);
        file_is_pressed = true;
    } else {
        zone_remove(&window->head, "open");
        zone_remove(&window->head, "save");
        zone_remove(&window->head, "quit");
        file_is_pressed = false;
    }
    return 0;
}
