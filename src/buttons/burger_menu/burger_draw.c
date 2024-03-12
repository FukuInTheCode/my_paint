/*
** EPITECH PROJECT, 2024
** burger_draw.c
** File description:
** burger_draw.c
*/

#include "my.h"

int burger_draw(burger_t *burger, window_t *window)
{
    sfRenderWindow_drawRectangleShape(window->window, burger->rect, NULL);
    return 0;
}
