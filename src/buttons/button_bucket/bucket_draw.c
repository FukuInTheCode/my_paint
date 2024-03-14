/*
** EPITECH PROJECT, 2024
** bucket_draw.c
** File description:
** bucket_draw.c
*/

#include "my.h"

int bucket_draw(bucket_t *bucket, window_t *window)
{
    sfVector2f corner_position =
            zone_get_corner(window, zone_get(window->head, "button_bucket"));

    sfRectangleShape_setPosition(bucket->rect, corner_position);
    sfSprite_setPosition(bucket->sprite, corner_position);
    sfRenderWindow_drawRectangleShape(window->window, bucket->rect, NULL);
    sfRenderWindow_drawSprite(window->window, bucket->sprite, NULL);
    return 0;
}