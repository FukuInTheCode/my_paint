/*
** EPITECH PROJECT, 2024
** gestion_of_window.c
** File description:
** is the gestion of the window
*/

#include "my.h"

int gestion_window(window_t *window)
{
    sfVector2i tmp = sfMouse_getPositionRenderWindow(window->window);
    zone_t *hovered = zone_get_mouse(window->head, window,
        (sfVector2f){tmp.x, tmp.y});

    sfRenderWindow_clear(window->window, sfBlack);
    zone_draw(window->head, window);
    if (hovered && hovered->hover_f)
        hovered->hover_f(hovered, window);
    sfRenderWindow_display(window->window);
    return 0;
}
