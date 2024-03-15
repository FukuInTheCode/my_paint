/*
** EPITECH PROJECT, 2024
** delimitator_draw.c
** File description:
** delimitator_draw.c
*/

#include "my.h"

int text_draw(text_t *text, window_t *window)
{
    zone_t *zone = zone_get(window->head, "canva");
    canva_t *canva = zone->extra_information;

    sfText_setColor(text->txt, canva->color);
    sfText_setPosition(text->txt,
        zone_get_corner(window, zone_get(window->head, "text")));
    sfRenderWindow_drawText(window->window, text->txt, NULL);
    return 0;
}
