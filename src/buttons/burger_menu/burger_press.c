/*
** EPITECH PROJECT, 2024
** burger_press.c
** File description:
** burger_press.c
*/

#include "my.h"

static int change_to_false(burger_t *burger, window_t *window)
{
    burger->is_clicked = false;
    burger->is_edit = false;
    burger->is_help = false;
    burger->is_file = false;
    zone_remove(&window->head, "file");
    zone_remove(&window->head, "edit");
    zone_remove(&window->head, "help");
    zone_remove(&window->head, "open");
    zone_remove(&window->head, "quit");
    zone_remove(&window->head, "save");
    zone_remove(&window->head, "pencil");
    zone_remove(&window->head, "eraser");
    zone_remove(&window->head, "subhelp");
    zone_remove(&window->head, "about");
    return 0;
}

int burger_press(burger_t *burger, window_t *window)
{
    if (!burger->is_clicked) {
        burger->is_clicked = true;
        zone_add(&window->head, burger->file);
        zone_add(&window->head, burger->edit);
        zone_add(&window->head, burger->help);
    } else {
        change_to_false(burger, window);
    }
    return 0;
}
