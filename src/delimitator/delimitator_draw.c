/*
** EPITECH PROJECT, 2024
** delimitator_draw.c
** File description:
** delimitator_draw.c
*/

#include "my.h"

int delimitator_draw(delimitator_t *delimitator, window_t *window)
{
    sfRenderWindow_drawRectangleShape(window->window, delimitator->rect, NULL);
    return 0;
}