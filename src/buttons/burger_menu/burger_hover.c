/*
** EPITECH PROJECT, 2024
** burger_draw.c
** File description:
** burger_draw.c
*/

#include "my.h"
#include <SFML/Graphics/Color.h>

int burger_hover(burger_t *burger, window_t *window)
{
    sfRectangleShape_setOutlineColor(burger->rect, sfBlue);
    sfRenderWindow_drawRectangleShape(window->window, burger->rect, NULL);
    sfRectangleShape_setOutlineColor(burger->rect, sfBlack);
    return 0;
}
