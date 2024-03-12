/*
** EPITECH PROJECT, 2024
** burger_press.c
** File description:
** burger_press.c
*/

#include "my.h"

int burger_press(burger_t *burger, window_t *window)
{
    if (!zone_get(window->head, "file")) {
        burger->is_clicked = true;
        zone_add(&window->head, burger->file);
        zone_add(&window->head, burger->edit);
        zone_add(&window->head, burger->help);
    } else {
        burger->is_clicked = false;
        zone_remove(&window->head, "file");
        zone_remove(&window->head, "edit");
        zone_remove(&window->head, "help");
    }
    return 0;
}
