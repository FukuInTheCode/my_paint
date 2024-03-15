/*
** EPITECH PROJECT, 2024
** quit_press.c
** File description:
** quit_press.c
*/

#include "my.h"

int quit_press(zone_t *zone, window_t *window)
{
    zone_remove(&window->head, "file");
    zone_remove(&window->head, "edit");
    zone_remove(&window->head, "help");
    zone_remove(&window->head, "subhelp");
    zone_remove(&window->head, "about");
    zone_remove(&window->head, "quit");
    zone_remove(&window->head, "new");
    zone_remove(&window->head, "save");
    zone_remove(&window->head, "open");
    zone_remove(&window->head, "eraser");
    zone_remove(&window->head, "pencil");
    zone_remove(&window->head, "side");
    zone_remove(&window->head, "plus");
    zone_remove(&window->head, "minus");
    sfRenderWindow_close(window->window);
    return 0;
}
