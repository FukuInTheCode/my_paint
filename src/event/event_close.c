/*
** EPITECH PROJECT, 2024
** event_close.c
** File description:
** event_close.c
*/

#include "my.h"

int event_close(window_t *window, sfEvent *event)
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
    zone_remove(&window->head, "side");
    zone_remove(&window->head, "plus");
    zone_remove(&window->head, "minus");
    sfRenderWindow_close(window->window);
    return 0;
}
